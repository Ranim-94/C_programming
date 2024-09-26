

#include "arrays_2D.h"
#include "array_2D_manip.h"

#include <stdio.h>
#include <stdlib.h>

/*
    Some info about 2D arrays:
    1- indexing in C: [row][column]
    2- althgouh the array is 2D, it is still
    a contingous memory -> meaning we have an equivalent of 1D = rowxcolumn

    3- order of traversal in 2D array is important in a hardware level
    the more we skipp, the more it is worse

    4- pitch of the array = how many bytes do we have in a signle row



*/


void run_2D_arrays(void){


/* step 1: create a normal 2D arrays <-> allocated at the stack */
size_t nb_row = 5;
size_t nb_col = 4;

int array_2D[nb_row][nb_col];

// fill in the array by some incremental values
int counter = 0;

for (int i = 0; i< nb_row ; i++) {

    for (int j = 0; j< nb_col ; j++){
        array_2D[i][j] = counter;
        
        counter++;

    } // End columns

} // End for rows



printf("\t - size of static array = %zu bytes \n",
		sizeof(array_2D));

printf("\t - nb of elements in the static array using sizeof()"
		"= %zu \n",
		sizeof(array_2D)/sizeof(int));

/*
 * for a static array (allocated at the stack)
 * we can deduce the number of elements using
 * sizeof()
 * Because sizeof(array_2D) indeed returns the
 * number of bytes of this array
 *
 * - Unlike an array allocated at the heap
 * (using malloc, calloc), sizeof() will return
 * the size of the pointer, which is usually
 * 8 bytes in a 64 bit machine architecture
 *
 * */


printf("-> \t 1-Printing static array content \n");
printf("----------------------------------------- \n \n");

// step 2: manipulating arrays using a pointer of 1D array
print_2D_array(array_2D,nb_row,nb_col);

printf("\n");

/*

  2D arrays and pointers

  - 1D arrays decay to a pointer int arr[5] <-> int* arr
  - 2D arrays decay to an arrays of pointers

  - Let for example int array[nb_row][nb_col] declared in some source file
    int* array_0 <-> array[0] <-> row 0 in the declared array  
    =>  int* array_0 = malloc(sizeof(int)*nb_col)
    

*/


// Part 2: dynamic 2D arrays
/*
    important:
    - memory: 2D dynamic arrays have more memory then stack 2D memory
    because they have also  pointers in them

    - storage: dynamic 2D arrays are not continuous in memory
     whereas 2D stack array are continuous in memory

*/

float** array_dyn = malloc(sizeof(float*)*nb_row);
// notice in sizeof() we have pointer of type float
// we are allocating a series of pointers (we have nb_row 1D pointers)
// so technically it is like we are allocating for rows

// Now we allocate for column per row
// here we are in row 0 (1st row)
array_dyn[0]= malloc(sizeof(float)*nb_col);
// array_dyn[0] = is 1D pointer

// now continue allocating for the other rows, but this time using a for loop
for (int i = 1 ; i<nb_row ; i++){
    array_dyn[i] = malloc(sizeof(float)*nb_col);

} // End for()


// TODO: fill the array with some numbers

printf("\t - size of dynamic array = %zu \n",
		sizeof(array_dyn));

printf("\t - size of float = %zu \n",
		sizeof(float));

printf("\t - Nb of elements in dynamic array = %zu \n \n",
		sizeof(array_dyn)/sizeof(float));

float max_limit = 5.5;

generate_random_2D_array(array_dyn,nb_row,nb_col, max_limit);


printf("-> \t 2-Printing dynamic array content \n");
printf("------------------------------------------\n\n");

print_2D_heap_array(array_dyn,nb_row,nb_col);


// free memory
// 1st we free the rows (since we allocated them 1st)

for (int i = 1 ; i<nb_row ; i++){
    free(array_dyn[i]);
}

// now free the series of 1D arrays (the 2D arrays)
free(array_dyn);



} // End run_2D_arrays()
