

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<time.h> // for time

#include "struct_binary.h"

#define NB_STRUCT 3

void write_struct_binary(void){

	student_t* school_a;

	school_a = malloc(sizeof(student_t)* NB_STRUCT);

	/*creating a list of names*/
	char* student_names[]={"John","Paul","Tom"};

	for(int i = 0; i<NB_STRUCT ; i++){

		/*copying name*/
		strcpy(school_a[i].name,student_names[i]);

		/*age between 10 and 18 */
		school_a[i].age = rand() % ((18 - 10)+18) ;

		/* ((18 - 10)+18) = (upperbound - lowerboound)
		 *
		 * + lowerbound to set up the range
		 *  */

		/*average between 0 and 20*/
		school_a[i].average = ((float)rand()/(float)RAND_MAX)*20 ;


	} /*End for loop*/

	char* file_name = "Students.bin";

	bool write_test = write_data(file_name,school_a,NB_STRUCT);

	if (write_test == false){

		fprintf(stderr,"write_data() is failing \n");
	}

	/*since we finished writing now, we free the dynamic memory*/

	free(school_a);

	/*Now reading from binary mode*/

	int total_student = 0;

	/*calling function read_data()*/
	student_t* some_class = read_data(file_name,&total_student);

	for(int i = 0; i<total_student ; i++){

		printf("-> Student # %d info \n",i);

		printf("\t\t -name is %s \n",some_class[i].name);

		printf("\t\t -age is %d \n",some_class[i].age);

		printf("\t\t -average is %f \n \n",some_class[i].average);

	} /* End for loop*/



} /* End run_struct_binary()*/


/* helper function definition */


bool write_data(char* file_name, student_t* data, int total_student){

	FILE* file_handler = fopen(file_name,"wb");

	if(file_handler == NULL){

		fprintf(stderr,"File %s is not opening \n",file_name);

		return false;

	}

	size_t written = fwrite(&total_student,sizeof(int),1,file_handler);

	/*
	 * fwrite should return the number of byte written
	 * */

	if(written != 1){
		fprintf(stderr,"fwrite has failed \n");

		return false;
	}

	/*Now writing the actual data*/

	size_t written_records = fwrite(data,sizeof(student_t),total_student,
									file_handler);

	/* This means write sizeof()x total_student ,
	 *
	 * in the addresse starting from data
	 * */

	if(written_records != total_student){
			fprintf(stderr,"fwrite for student_t has failed \n");
			return false;
		}

	if(fclose(file_handler) == EOF) return false ;

	/*if we reach this point so all is true*/
	printf("\t Writing in binary mode is succeeded \n");

	return true;


} /* End  write_data*/

student_t* read_data(char* file_name,int* total_student){


	FILE* file_handler = fopen(file_name,"rb");

	if(file_handler == NULL){
		fprintf(stderr,"File %s is not opening \n",file_name);

		return NULL;
		/*here since the function is of return type student_t*
		 *
		 * so we are returning NULL to handle the error this time
		 *
		 * */
	}


	/*step 1: reading how many records we have*/

	/* Here we are executing the function and checking error also*/
	if(fread(total_student,sizeof(int),1,file_handler)!=1){

		fprintf(stderr,"Reading records number has failed \n");
		return NULL;
	}

	/*In case of success, value is stored at memory address
	 *
	 * of total_student
	 * */

	/* step 2: after reading how many records
	 * we allocate at the heap
	 *
	 * */

	student_t* some_class = malloc(sizeof(student_t) * (*total_student));

	if (fread(some_class,sizeof(student_t),*total_student,
			file_handler) != *total_student){

		fprintf(stderr,"Reading student_t struct member has failed \n");

		/* In case of error, we need to free the memory so we don't
		 *
		 * have memory leak*/
		free(some_class);

		return NULL;
	}

	if(fclose(file_handler)== EOF){

		fprintf(stderr,"file close operation has failed \n");
		free(some_class);
		return NULL;
	}

	return some_class;

} /* End read_data() */
