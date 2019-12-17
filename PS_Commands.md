## C++ Environment
- VSCode    // code editor, code.visualstudio.com
- git       // for source control, git-scm.com
- cmake     //to work with project, cmake.org
- g++       // compiler, mingw.org
- github    // cloud server, github.com

## Commands 
Note: (prompt $)
```bash
$pwd			# present working dir
$rm <filename>	# remove
$ ls  			# list folder
$ cd <dest>  	# change dir, <dest> = path, .=current, ..=parents dir
$ mkdir <name>  # create folder
$ cp <source> <dest>    # copy file <source> to <dest>
```
## C++ Basics

- File ext is `.cpp`
- Header files: `.h`

## g++ Compiler for 1 file
```bash
# To compile, -o for output file name
$ g++ main.cpp -o main

# To run
$ ./main.exe
```

## g++ Compiler for 2 files
When library and header files with driver .cpp with "main()"
- List all .cpp source file into one output file
- Header file is included
For example library `function.cpp` and `funct.h` has a driver in `run_funct.cpp` which has main(), then to compile:
$ g++ funtion.cpp run_funct.cpp -o function.exe




### C++ File Template
```cpp
#include <iostream>
using namespace std;

int main()
{
    return 0;
}
```


## Plugins and Doxygen
Add plug-ins for new IDE
```cpp
//Add Code Spell extension
//Add C/C++ Intellisense
//Add Doxygen (/** enter)
//Add Markdown All-in-One
//Add CMake and CMake Tools
//Add Epitech header
```


## Variable Scope
- Looks first in Local, then Global, then file


## Build
- Need rules updated in `CMakeLists.txt` files
  - main and library files, and target
- Create folder `$ mkdir build`
- Go to dir `$ cd build`
- Run `$ cmake .. -G "MinGW Makefiles`   // To set up the make rules. ".." .txt file is up one level
- Build `$cmake --build .`             // "." current location (pwd)
- Run `./main.exe`