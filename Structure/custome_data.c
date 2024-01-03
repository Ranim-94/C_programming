
#include<stdio.h>
#include"custome_data.h"

void print_datafields(person_t my_person){

printf("Sam age is %d and its year of birth is %d \n ",my_person.age,my_person.birth_year);


} // End print_datafields(person_t my_person)

// logging using pointer to a struct as argument
void print_datafields_PtrVersion(person_t* my_person){

// Note that since we are using the pointer structure, we use the -> operator to access the fields
printf("Sam age is %d and its year of birth is %d \n ",my_person->age,my_person->birth_year);

} // End print_datafields_PtrVersion()

void print_vect(vect3_t* my_vec){

printf("x coord = %f | y coord = %f | z coord = %f \n",my_vec->x,my_vec->y,my_vec->z) ;

} // End print_vect(my vec)
