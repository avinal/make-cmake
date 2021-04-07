# How to manually convert `Makefiles` to `CMakeLists.txt`

## Install packages (Debian/Ubuntu)

```bash
    sudo apt update
    sudo apt install make cmake
```

## Makefile 

### Source Tree

<p align=center>
<code>

    hello-make/
    ├── include
    │   └── hello.h
    ├── lib
    │   ├── hello.cc
    │   └── Makefile
    ├── Makefile
    └── src
        ├── main.cc
        └── Makefile
</code>
</p>

### How to run Make?

```bash
    cd hello-make
    make
    ./src/hellomake
```

## CmakeLists.txt 

### Source Tree

<p align=center>
<code>

    hello-cmake/
    ├── CMakeLists.txt
    ├── include
    │   └── hello.h
    ├── lib
    │   ├── CMakeLists.txt
    │   └── hello.cc
    └── src
        ├── CMakeLists.txt
        └── main.cc
</code>
</p>

### How to run CMake?

```bash
    cd hello-cmake
    mkdir build && cd build
    cmake ..
    make
    ./src/hellocmake
```

## References
[Convert Makefile to CMakeLists.txt manually](https://www.hiroom2.com/2016/09/07/convert-makefile-to-cmakelists-txt-manually/)
