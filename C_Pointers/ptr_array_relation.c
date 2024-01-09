
// =============  Description and content  =============

/*
Facts to remember:
=================
Although pointer and arrays are related, but each one of them is a unique data structure
In this demo, we shall point out these differences

Content:
=========
    - using array through pointers (accessing elements of array via the pointer for example)
    - in accessing content of array via a pointer, we don't need to use 
     the dereference * as in int,float,.. data types. We use directly pointer_name[index]

    - however, keep in mind that altough that float* data_ptr = data_arr (some_pointer = array_name),
    pointers and array remains 2 different entities. each of them have different size 
        (we can use size of operator to demonstrate this)
*/


#include<time.h> // for time
#include<stdio.h>
#include<stdlib.h> // to use RAND_MAX

#include"ptr_array_relation.h"

#define ARRAY_SIZE 5


void run_demo_ptr_array_relation(void){

printf("\t\n ===============================================\n \n ");
printf("\t  Pointer and Array Relation Demo  \n\n");
printf("\t ===============================================\n \n ");


// so we can generate random numbers each time we run the code
srand(time(NULL));

// declaring an array
float data_arr[ARRAY_SIZE];

// fill in the array randomly between 0 and ARRAY_SIZE
for (int i=0; i<ARRAY_SIZE; i++){

    data_arr[i] = (float)rand()/((float)RAND_MAX); // here we have a floating point between 0 and 1
    data_arr[i] = data_arr[i]*ARRAY_SIZE; // scale up to ARRAY_SIZE

} // End for loop filling content


printf("\t \n Printing content of array through array: using array name and index \n");

// print the content  of the array using array name and index 
for (int i=0; i<ARRAY_SIZE; i++){

    printf("\t -> # %d = %f \n",i,data_arr[i]) ;

} // End for loop printing


// ========================== Using pointer =============================

// we assign the pointer to array directly by using array name
float* data_ptr  = data_arr;

// we can access the content of array using pointer

// accesssing using pointer and index (equivalent to dereferencing) <=> data_ptr[index] = data_arr[index]
// note that in case of array we don't use * to dereference as in case of normal variables (int,float,...)

printf("\t \n Printing content of array through pointer: using pointer name and index \n");

// print the content  of the array but this time using pointer name and index
for (int i=0; i<ARRAY_SIZE; i++){

    printf("\t -> # %d = %f \n",i,data_ptr[i]) ;

} // End for loop printing

printf("\t -> Size of array = %ld bytes | Size of pointer = %ld bytes \n ",sizeof(data_arr),sizeof(data_ptr));
// note that we obtain different sizes for array and pointer indicating that indeed
// pointer and arrays are different entities although they are related


printf("\t\n===============================================\n \n ");
printf("\t  End of Pointer and Array Relation Demo  \n\n");
printf("\t ===============================================\n \n ");


} // end run_demo_ptr_array_relation()