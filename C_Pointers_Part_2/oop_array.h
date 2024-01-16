


#pragma once
#include<stdlib.h> // for malloc(),...
#include<stdio.h>


typedef struct array{


struct array* self; // pointer to the object itself
// help us to keep track where my object is in memory
// equivalent to this in C++ or slef in python in __init__() method

// Attributes
float* data; // values
size_t size; // length of the array

// Methods
void (*pfn_set)(struct array*,size_t,float);
float (*pfn_get)(struct array*,size_t);

// float (*pfn_sum)(struct array*,size_t,float);

}array_t ;


// Method Declaration

// constructor
array_t* array_cons(size_t capacity);

// destructor <-> freeing up resources
void array_destructor(array_t* self);


// Retrieve some element 
float get_element_array_t(array_t* self, size_t index);


// Setting some element at some index
void set_element_array_t(array_t* self, size_t index, float value);








