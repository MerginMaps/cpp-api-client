# Mergin Cpp Client

This repository contains a cpp client module for access to [Mergin](https://public.cloudmergin.com/)
service and a command-line tool for easy access to data stored in Mergin.

[![Code Layout](https://github.com/lutraconsulting/mergin-cpp-client/workflows/Code%20Layout/badge.svg)](https://github.com/lutraconsulting/mergin-cpp-client/actions?query=workflow%3A%22Code+Layout%22)
[![Auto Tests](https://github.com/lutraconsulting/mergin-cpp-client/actions/workflows/autotests.yml/badge.svg)](https://github.com/lutraconsulting/mergin-cpp-client/actions/workflows/autotests.yml)

Note: Check also [Mergin Python Client](https://github.com/lutraconsulting/mergin-py-client)

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

TODO

### Tests
TODO
For running test do:

    cd mergin
    export TEST_MERGIN_URL=<url> # testing server
    export TEST_API_USERNAME=<username>
    export TEST_API_PASSWORD=<pwd>
    export TEST_API_USERNAME2=<username2>
    export TEST_API_PASSWORD2=<pwd2>
    pipenv run pytest --cov-report html --cov=mergin test/
