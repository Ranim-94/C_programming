

#include"array_oop_client.h"

void run_array_oop(void) {

// the client source file in which we will use our emulated array class (oop_array.c/h)

printf("\n -> Allocating and initialzing the array \n");

// setting up capacity
size_t capacity = 10; 

// create some array
array_t* some_array = array_cons(capacity);

float value = 1.0;

// setting up data: create a vector of 1 for example
for (int i=0; i< some_array->size ; i++){

some_array->pfn_set(some_array,i,value) ;

} // End for() to fill up the element


printf("\n -> Displaying the content \n");

// retrieving and printing element to console

for (int i=0; i< some_array->size ; i++){

// retrieving a particular element
float some_elemnt = some_array->pfn_get(some_array,i) ;

printf("\n\t -> element # %d = %.1f \n",i,some_elemnt);

} // End for() to retrieving up the elemen

printf("\n -> Releasing resources \n");

// freeing up resources
array_destructor(some_array);



} // End run_array_oop