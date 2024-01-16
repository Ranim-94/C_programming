

/*
    - void pointers: pointers that are not assoicated with any data type
    - like any pointers, they also store addresses, and they can point (after assignment)
    to any data type

*/

#include"void_pointer.h"



void run_void_ptr_demo(void){

// declaring some pointer
void* ptr; 

int nb1 = 5; // declaring and initializing some variable

ptr = &nb1;

printf("\n -> ptr value after casting = %d \n",*((int*)ptr));

/*
In C, we can't dereference a void pointer directly by using the * operator
We need to cast the void pointer to the correspondent pointer type, then dereferencing

*((int*)ptr) include 2 operations:
    1- (int*)ptr <-> int* ptr
    2- dereferencing 

*/


/*
    Also othe usage for void pointers: make the function more generic
    1- malloc(sizeof(data type)*nb)
    malloc() return void pointers
    but we can use the correspondent pointer type using the same signature


*/




} // End run_void_ptr_demo()