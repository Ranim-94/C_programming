
/*
  Dynamic memory concept:
  1- variables when created are created in stack
  2- stack as memory layout: continous block of memory
    - that's why when declare some array with some size, we can't later
    - alter its size, because the next block of memory will be occupied by some value
    - stack is growing downward in terms of addresses (12,13,..)

  3- heap:
    - dynamic array
    - memory are not continous

*/

#include"dynamic_array.h"
#include"array_manip.h"


void create_dynamic_array(void){

/*
    demonstrate the usage of malloc() and free()
    in context of arrays data structure
*/

int nb_elements = 4;

// allocate continous block of memory
// nb of these blocks = nb_elements
float* dynamic_array = malloc(sizeof(float)*nb_elements);
// note that the malloc() returns a pointer of type of data type allocated

// generate some random values in dynamic_array
generate_random_array(dynamic_array,nb_elements);

// print the values
display_array(dynamic_array,nb_elements);

// free up memory so it can be used by other programs
free(dynamic_array);

/*

Other functions used in memory allocation:
- when using malloc(), it may give us block of memory where we have some garbage values
    - so not clean 100%

- what we can use is calloc(nb_elements,sizeof(float)):
    - this function make sure that we have initial values allocated to 0
    - the cost: because it will give clean values, calloc() will go and make sure that
    - these places are 0 <-> it take more time than malloc()


- other function realloc(nb_elements,sizeof(float)):
    - if we exceed the capacity using malloc() or calloc(), realloc() will either
        - enlarge the space
        - or fetch another block of memory which have the bigger required capacity
        (because maybe the next block of memory are being allocated) 
*/



} // End create_dynamic_array