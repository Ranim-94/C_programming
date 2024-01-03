
#include"dynamic_array.h"
#include<stdio.h>
#include<stdlib.h> // to use malloc function and RAND_MAX
#include<time.h> // for time

#define ARRAY_SIZE 4

void create_dynamic_array(void){

/*
    demonstrate the usage of malloc() and free()
    in context of arrays data structure
*/

// allocate continous block of memory
// nb of these blocks = ARRAY_SIZE
float* dynamic_array = malloc(sizeof(float)*ARRAY_SIZE);

// note that the malloc function return a pointer of type of data type allocated

// so we can generate random numbers each time we run the code
srand(time(NULL));

// fill in the array randomly between 0 and 1
for (int i=0; i<ARRAY_SIZE; i++){

    dynamic_array[i] =  (float)rand()/((float)RAND_MAX) ;

} // End for loop allocation


printf("Printing the allocated array \n");

// print the content  of the array 
for (int i=0; i<ARRAY_SIZE; i++){

    printf("\t -> # %d = %f \n",i,dynamic_array[i]) ;

} // End for loop printing


// free up memory so it can be used by other programs
free(dynamic_array);


} // End create_dynamic_array