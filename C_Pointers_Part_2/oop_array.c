

#include"oop_array.h"


// constructor
array_t* array_cons(size_t capacity){

// 1st we allocate for the entire type array_t
array_t* new_array = malloc(sizeof(array_t)) ;

// 2nd we set each member fields

// holds our actual object new_array by storing it back using the self pointer
// be aware that when access a field of new_array using ->, we are accessing 
// a pointer here in this case
new_array->self = new_array;

// allocate for the data
new_array->data = (float*) malloc(sizeof(float)*capacity);

// updating a member field: setting the size using capacity input argument
new_array->size = capacity;

// set up function pointers
// this will link the function to our struct and mimic the behaviour of class
new_array->pfn_get = get_element_array_t;
new_array->pfn_set = set_element_array_t;

// return the data type created
return new_array;


} // End array_cons()



float get_element_array_t(array_t* self, size_t index){

if (index > self->size){

    printf("\n Index is out of bound \n");

    return 1;
}

// retrieving the data by by accesing the data memeber at some index
float some_element = self->data[index];

return some_element;

} // End get_element_array_t()


void set_element_array_t(array_t* self, size_t index, float value){

// checking we can acces the array 1st
if (self == NULL){
    
    printf("\n Array pointer self is at NULL \n");
    
    return ;

} // End if

if(index >=0 && index<self->size ){
// making sure that the index is not out of bound or typing some invalid index (like a negative value)

// setting the element of array by some value
self->data[index] = value;

} // End if()


} // End set_element_array_t()



// destructor <-> freeing up resources
void array_destructor(array_t* self){
/*
    The order of free is important
    we should 1st clear the data then the array using self pointer
*/

free(self->data);
free(self);

} // End array_destructor()


