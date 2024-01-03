
#include"c_pointer_demo.h"
#include <stdio.h>

void run_pointer_basics(void){

// declaring some variables
int var = 5;


// using pointers
int* ptr_var;// declaring a pointer of type int

// assigning the pointers using the & operator
ptr_var = &var;

// logging some information to console
printf("========== Variable information ========== \n");
printf("\t - variable value = %d \n ",var);
printf("\t - address of variable in memory = %p \n",&var);

printf("\n");

printf("========== Pointer information ========== \n");
printf("\t - pointer value %p \n",ptr_var); // pointers value are always addresses
printf("\t - address of pointer %p \n",&ptr_var); // address of pointer different then address of variables pointing to them
printf("\t - value dereferenced by pointer %d \n",*ptr_var);

/*
    the %p specifier outputs a memory location as a hexadecimal integer on most platforms
*/

printf("\n");

printf("========== End pointer basics ========== \n");

} // End function run_pointer_basics