

#include "files_read.h"

#include <stdio.h>

void run_files_read(void){
// Description: a demo for fscanf()
// reading some data from a file with a known pattern
// ie. formatting or known convention



// fscanf: - it reads a file with some known formatting or convention
// such as some file having 1 number per line, or 2 number per line,....
// So in othter words, if we know that our file have some formatting,
// fscanf is a good way to read it

// - it reads line by line 


// creating the handler
FILE* file_read = NULL;

file_read = fopen("dummy_read_file","r");

// declaring some var to hold the values
int var_1 = 0 ;

int var_2 = 0 ;

int line_counter = 1;

while(fscanf(file_read,"%d %d",&var_1,&var_2) != EOF){
// reading values and parse them to the variables var_1 and var_2

printf("line %d | val 1  = %d | val 2 = %d \n",line_counter,var_1,var_2);

line_counter++; // increment so we move to next line

} // End while()

fclose(file_read); // releasing the file handler

} // End run_files_read()