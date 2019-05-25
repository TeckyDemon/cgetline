# CGetline

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

**CGetline** is a cross-platform getline function for C.

## Content

- [Content](#content)
- [Prerequisites](#prerequisites)
  - [Windows](#windows)
- [Installation](#installation)
- [Documentation](#documentation)
  - [Methods](#methods)
- [Authors](#authors)
- [Contact](#contact)
- [License](#license)

## Prerequisites

### Windows

Install **make** and **mingw**.

## Installation

```
git clone "https://github.com/DeBos99/cgetline.git"
make -C cgetline
```

* Move **cgetline** to your project directory
* Add `#include "cgetline/getline.h"` to your source files
* Compile **getline.o** file with other files e.g. `gcc main.c cgetline/getline.o`

## Documentation

### Methods

| Method                                                  | Description                                                                                                                    |
| :---                                                    | :---                                                                                                                            |
| char* getline(FILE* input_file,char** output_variable)  | Returns next line from the **input_file** where **output_variable** is also the pointer to the returned value. |
| char* cgetline(FILE* input_file,char** output_variable) | Synonymous with **getline(input_file,output_variable)**.                                                                        |

## Authors

* **Michał Wróblewski** - Main Developer - [DeBos99](https://github.com/DeBos99)

## Contact

Discord: DeBos#3292

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details.
