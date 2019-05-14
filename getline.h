#ifndef GETLINE_H
#define GETLINE_H

#include <stdio.h>

#define getline(x,y) cgetline(x,y)

char*
cgetline(FILE* input_file,char** output_variable);

#endif