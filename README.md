[![Code Layout](https://github.com/MerginMaps/mergin-cpp-client/workflows/Code%20Layout/badge.svg)](https://github.com/MerginMaps/mergin-cpp-client/actions?query=workflow%3A%22Code+Layout%22)
[![Linux Build](https://github.com/MerginMaps/mergin-cpp-client/actions/workflows/linux.yml/badge.svg)](https://github.com/MerginMaps/mergin-cpp-client/actions/workflows/linux.yml)
[![Windows Build](https://github.com/MerginMaps/mergin-cpp-client/actions/workflows/windows.yml/badge.svg)](https://github.com/MerginMaps/mergin-cpp-client/actions/workflows/windows.yml)
[![macOS Build](https://github.com/MerginMaps/mergin-cpp-client/actions/workflows/macos.yml/badge.svg)](https://github.com/MerginMaps/mergin-cpp-client/actions/workflows/macos.yml)

# Mergin Maps Cpp Client

This repository contains a cpp client module for access to [MerginMaps](https://merginmaps.com/)
service and a command-line tool for easy access to data stored in Mergin Maps.

<div><img align="left" width="45" height="45" src="https://raw.githubusercontent.com/MerginMaps/docs/main/src/.vuepress/public/slack.svg"><a href="https://merginmaps.com/community/join">Join our community chat</a><br/>and ask questions!</div><br />

Note: Check also [Mergin Maps Python Client](https://github.com/MerginMaps/mergin-py-client)

## Command-line Tool

When the client is installed, it comes with `mergin` command line tool.

```
$ mergin --help
Usage: mergin [OPTIONS] COMMAND [ARGS]...

Options:  
  --help      Show this message and exit.
  --version   Show the version information.
  --username  Mergin username (or MERGIN_USERNAME env. variable)
  --password  Mergin password (or MERGIN_PASSWORD env. variable)
  --url       Mergin url      (defaults to public.cloudmergin.com)

Commands:
  create         Create a new project on Mergin server
  download       Download last version of mergin project
  sync           Pull&Push the changes
  remove         Remove project from server.
```


## Development

### Compilation

#### Windows 

For CI setup, see this [GitHub Action](.github/workflows/windows.yml)

1. Install Visual Studio (At least c++ compiler)
2. Install Qt5 (some recent version, 5.14.x or 5.15.x)
3. Install Cmake
4. Compile [Geodiff](https://github.com/MerginMaps/geodiff)
```
 <in VS cmd>
 git clone https://github.com/MerginMaps/geodiff
 cd build-geodiff
 cmake ..\geodiff\geodiff
 cmake --build . --config Release
```
5. Download Input
```
 git clone https://github.com/MerginMaps/input
 git checkout mergin_cpp
```
6. Compile Client
```
 <in VS cmd>
 cd build-client
 cp ..\mergin-cpp-client\scripts\ci\config.pri ..\mergin-cpp-client\src\config.pri (+ modify!!)
 qmake ..\mergin-cpp-client\src\client.pro
 nmake release
```

### Tests

For running test do:

```
    export TEST_MERGIN_URL=<url> # testing server
    export TEST_API_USERNAME=<username>
    export TEST_API_PASSWORD=<pwd>
    ./tests.bash
```