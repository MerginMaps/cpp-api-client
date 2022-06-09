#!/bin/bash

DIR="$( cd -- "$( dirname -- "${BASH_SOURCE[0]:-$0}"; )" &> /dev/null && pwd 2> /dev/null; )";
PWD=$(pwd)

CPP_CLIENT=$1


#TODO check we have all 3 env vars


echo "*****************************************"
echo "testing executable $CPP_CLIENT"
$CPP_CLIENT --help || { echo ' smoke test failed' ; exit 1; }
 
TEMPD=$(mktemp -d)
echo "using temp dir $TEMPD"


DATE_WITH_TIME=`date "+%Y%m%d-%H%M%S"`
PROJECT_NAME="test-cpp-client-$DATE_WITH_TIME"
PROJECT_NAMESPACE=$TEST_API_USERNAME
PROJECT=$PROJECT_NAMESPACE/$PROJECT_NAME


cd $TEMPD
echo "*****************************************"
echo "testing create $PROJECT on $TEST_MERGIN_URL"
$CPP_CLIENT --url $TEST_MERGIN_URL --user $TEST_API_USERNAME --password $TEST_API_PASSWORD create $PROJECT || { echo ' unable to create project' ; exit 1; }

echo "*****************************************"
echo "testing download $PROJECT on $TEST_MERGIN_URL"
$CPP_CLIENT --url $TEST_MERGIN_URL --user $TEST_API_USERNAME --password $TEST_API_PASSWORD download $PROJECT || { echo ' unable to download project' ; exit 1; }
if [ ! -d "$PROJECT_NAME/.mergin" ]; then
  echo "unable to create/download project, $PROJECT/.mergin does not exist"
  exit 1;
fi

echo "*****************************************"
echo "testing sync1 $PROJECT on $TEST_MERGIN_URL"
cd $PROJECT_NAME
touch myfile1.txt
$CPP_CLIENT --url $TEST_MERGIN_URL --user $TEST_API_USERNAME --password $TEST_API_PASSWORD --verbose sync || { echo ' unable to sync1 project' ; exit 1; }

echo "*****************************************"
echo "testing sync2 $PROJECT on $TEST_MERGIN_URL"
touch myfile2.txt
$CPP_CLIENT --url $TEST_MERGIN_URL --user $TEST_API_USERNAME --password $TEST_API_PASSWORD sync || { echo ' unable to sync2 project' ; exit 1; }

echo "*****************************************"
echo "testing info $PROJECT on $TEST_MERGIN_URL"
$CPP_CLIENT --url $TEST_MERGIN_URL --user $TEST_API_USERNAME --password $TEST_API_PASSWORD info || { echo ' unable to info project' ; exit 1; }
$CPP_CLIENT --url $TEST_MERGIN_URL --user $TEST_API_USERNAME --password $TEST_API_PASSWORD --json info || { echo ' unable to info json project' ; exit 1; }

echo "*****************************************"
echo "testing remove $PROJECT on $TEST_MERGIN_URL"
cd ..
$CPP_CLIENT --url $TEST_MERGIN_URL --user $TEST_API_USERNAME --password $TEST_API_PASSWORD remove $PROJECT || { echo ' unable to remove project' ; exit 1; }

echo "*****************************************"
cd $PWD
rm -rf $TEMPD
echo "test passed"