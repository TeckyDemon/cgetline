# CGetline

**CGetline** is a cross-platform getline function for C.

## Content

- [Content](#content)
- [Prerequisites](#prerequisites)
  - [Windows](#windows)
- [Installation](#installation)
- [Usage](#usage)
- [Example program](#example-program)
- [Authors](#authors)
- [License](#license)

## Prerequisites

### Windows

Install **make** and **mingw**.

## Installation

```
git clone "https://github.com/DeBos99/cgetline.git"
cd cgetline
make
cd ..
```

## Usage

Move the file **getline.a** to your project directory.

Add library to the linker by adding:

`-lgetline`

and

`-L.`

if needed.

## Example program

```
#include <stdio.h>
#include "getline.h"

int main(){
	FILE* input_file=fopen("test","r");
	char* line;
	while(getline(input_file,&line)!=NULL){
		printf("%s\n",line);
	}
	fclose(input_file);
}
```

## Authors

* **Michał Wróblewski** - Main Developer - [DeBos99](https://github.com/DeBos99)

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details.
