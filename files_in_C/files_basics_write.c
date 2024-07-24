
#include "files_basics_write.h"
#include "array_manip.h"

#include <stdio.h>


#define ARRAY_SIZE 5

void run_files_write(void){
// Description: a code which demonstrate some write operation to some
// file


// step 1: create a file handler -> it is a reference to the file 
// we are using

FILE* file_example = NULL;

// every file we opened is in a specific mode

// opening the file

file_example = fopen("example_file","w");
// fopen(): 2 cases for this function
// case 1: if the file doesn't exist, it will create it
// case 2: if it is exist, it will reopen it and delete all its
// content, and start writing from 0

// some checking

if (file_example == NULL){

fprintf(stderr,"Error in fopen() , please check \n ");

} // End if()


// function 1: fputs()

// creating some string to write it into the file
char* str_1 = "Hello, this is the 1st sentence \n"; 

fputs(str_1,file_example);
// when using fputs(), the str needs to contain some \n in order to 
// get to a new line, since fputs() won't do it 


// function 2: fprintf()
// we can write some numeric values and use placeholders such as %d,...

int some_var = 5;

fprintf(file_example,"-> data = %d \n",some_var);

// Part 2: logging some array data into the file

fputs("-> Logging out array results \n",file_example);

float some_arr[ARRAY_SIZE] = {0};

// filling the array with some random values
generate_random_array(some_arr,ARRAY_SIZE);

// writing down the array to the file

for (int i = 0; i<ARRAY_SIZE; i++){

fprintf(file_example,"data # %d = %.1f \n",i,some_arr[i]);

} // End for() loop


fclose(file_example);


} // End function run_files_basics()