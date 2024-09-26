
#include "array_2D_manip.h"

#include<stdio.h>
#include<time.h> // for time
#include<stdlib.h> // to use RAND_MAX

void print_2D_array(int* array,int nb_row, int nb_col){

	/*
	 * this type of function can be used where the
	 * 2D array is stack allocated
	 * */

    for (int i = 0; i< nb_row ; i++) {

    for (int j = 0; j< nb_col ; j++){
        printf("%d \t",array[i*nb_col+j]);

    } // End columns

    printf("\n"); // take a new line after finishing 1 row

} // End for loop ; rows part


} // End function print_2D_array()


void generate_random_2D_array(float** array_ptr,size_t row_size,size_t column_size, float max_limit){

// by using this type of implementation, the array_ptr is pointing to some declared array
// in the local main program (or where this function is being called in some source file)

// so we can generate random numbers each time we run the code
srand(time(NULL));

// fill in the array randomly between 0 and ARRAY_SIZE
// but pay attention here we are using the pointer and not the actual array
for (int i = 0; i < row_size; i++){

	for(int j = 0; j < column_size; j++){

    array_ptr[i][j] = (float)rand()/((float)RAND_MAX); // here we have a floating point between 0 and 1
    array_ptr[i][j] *= max_limit; // scale up to max_limit

		} // End inner loop

	} // End for outer loop

} // End generate_random_array_v1_local()


void print_2D_heap_array(float** array,int nb_row, int nb_col){

	/*
	 * this type of function can be used where the
	 * 2D array is stack allocated
	 * */

    for (int i = 0; i< nb_row ; i++) {

    for (int j = 0; j< nb_col ; j++){
        printf("%f \t",array[i][j]);

    } // End columns

    printf("\n"); // take a new line after finishing 1 row

} // End for loop ; rows part


} // End function print_2D_array()









