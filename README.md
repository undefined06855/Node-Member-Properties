# NodeMemberProperties
This is where she makes a mod.


## Python Setup

1. Clone the repository
1. Create a venv:
    - On Linux, run `python3 -m venv ./venv && source ./venv/bin/activate`
    - On Windows, run `python -m venv ./venv ; ./venv/Scripts/Activate.ps1`
1. Run `pip install -r requirements.txt`
1. Create a `.env` file based on the following:
    ```
    GD_VERSION=2.2081
    GD_PLATFORM=win
    BUILD_DIR=build/
    USE_LOCAL_CODEGEN=true

    # for linux
    OS_HEADER_LOCATIONS=/home/undefined0/.local/share/Geode/cross-tools/splat/crt/include
    STL_HEADER_LOCATIONS=/usr/bin/lib/clang/21/include
    LIBCLANG_LOCATION=
    PLATFORM_DIRECTORY_SEPARATOR=/

    # for windows
    OS_HEADER_LOCATIONS=C:\Program Files (x86)\Windows Kits\10\Include,C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.44.35207\include
    STL_HEADER_LOCATIONS=
    LIBCLANG_LOCATION=C:\Users\undefined0\scoop\apps\llvm\current\bin\libclang.dll
    PLATFORM_DIRECTORY_SEPARATOR=\

    # libclang.dll/.so should be automatically picked up but LIBCLANG_LOCATION exists if it doesn't
    # leave it empty for it to automatically find it
    ```
    (or just set the environment variables)
1. Configure the mod (necessary to make the files that clang needs!)
1. Run `generate.py` to generate the files. You should have clang installed (probably)!

## Python Contributing

Install development packages by running `pip install -r requirements_dev.txt`

Before committing, make sure to run
```
black . -t py314 -l 120
isort .
```

And if you want to add more packages, make sure to run
```
pip-compile --strip-extras
# or
pip-compile requirements_dev.in --strip-extras
```
(ideally using python 3.14 but whatever I don't really care if it's newer)

