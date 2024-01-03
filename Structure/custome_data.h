
#pragma once

extern struct person
{
    int age;
    int birth_year;

}; // End struct person ;

// setting an alias to person struct
// this will gain us some code back in main when we are using the person struct
typedef struct person person_t;

typedef struct {
float x;
float y;
float z;
} vect3_t;

extern vect3_t;

// declaring a logging function which print out the data fields of the strcut

void print_datafields(person_t my_person);

void print_datafields_PtrVersion(person_t* my_person);

void print_vect(vect3_t* my_vec);
