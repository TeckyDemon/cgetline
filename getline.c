#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "getline.h"

char*
cgetline(FILE* input_file,char** output_variable){
    const unsigned int chunk_size=256;
    char* line=malloc(chunk_size*sizeof*line+1);
    if(line==NULL){
        fprintf(stderr,"Fatal: failed to allocate %zu bytes.\n",chunk_size*sizeof*line+1);
        exit(1);
    }
    unsigned int i;
    for(i=0;;++i){
        memset(line+chunk_size*i,0,chunk_size);
        if(fgets(line+chunk_size*i,chunk_size+1,input_file)==NULL)
            break;
        if(line[strlen(line)-1]=='\n')
            break;
        char* tmp=realloc(line,chunk_size*(i+2)*sizeof*line+1);
        if(tmp==NULL){
            fprintf(stderr,"Fatal: failed to allocate %zu bytes.\n",chunk_size*(i+2)*sizeof*line+1);
            exit(1);
        }else
            line=tmp;
    }
    if(strlen(line)==0){
        free(line);
	*output_variable=NULL;
        return *output_variable;
    }else{
        line[strlen(line)-1]=0;
	*output_variable=line;
        return *output_variable;
    }
}
