

#include<stdio.h>
#include"custome_data.h"

int main(void){


// create an instance
person_t Sam; // we used the alias name because we used typedef
// the classical way: struct person Sam

// setting up attributes
Sam.age = 10;
Sam.birth_year = 23093;
// We use the . operator to access the fields, and set the values

// displaying some info to the console
printf("Sam age is %d and its year of birth is %d \n ",Sam.age,Sam.birth_year);


printf("\n ======== Priting info using a function instead ======== \n \n");

print_datafields(Sam); // call the function

printf("\n ======== Priting info using a function taking ptr to a struct argument instead ======== \n \n");

// Note that here, we pass the address of the struct using &
print_datafields_PtrVersion(&Sam); // call the function

// declaring some vector
vect3_t my_vec = {.x = 1.2, .y = 2.3, .z = 3.4};
// Here, we used 2 things:
// 1- {} initializer list using {}, to initialize the member fields
// 2- name of the attribute using .x (.member_name)

printf("\n ======== Priting info of my_vect struct ======== \n \n");

// displaying the coordinate on the console
print_vect(&my_vec);

return 0;

} // End main()