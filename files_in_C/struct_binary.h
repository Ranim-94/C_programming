
#pragma once

#include <stdbool.h>

void write_struct_binary(void);


typedef struct {

	char name[256];
	int age;
	float average;

} student_t;


/* some helper function */

bool write_data(char* file_name, student_t* data, int total_student);

student_t* read_data(char* file_name,int* total_student);



