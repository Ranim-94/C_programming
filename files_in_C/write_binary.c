

/*
 * Description
 *
 * - basic example of writing and reading in binary mode
 * - in this example we deal with array data type
 *
 * */

#include <stdio.h>

#include "write_binary.h"
#include "array_manip.h"

#define ARRAY_SIZE 10

void write_to_binary(void){

	float some_arr[ARRAY_SIZE] = {0};

	/* filling the array with some random values */
	generate_random_array(some_arr,ARRAY_SIZE);

	display_array(some_arr, ARRAY_SIZE);

	/*Writing data to binary file*/

	char* bin_file_name = "array.bin";

	/*creating a file handler*/
	FILE* file_bin_array = fopen(bin_file_name,"wb");

	/*checking if open is succeeded*/

	if(file_bin_array == NULL){
		fprintf(stderr,"file %s is not opened \n",bin_file_name);
	}

	/*writing data*/
	fwrite(some_arr,sizeof(some_arr),1,file_bin_array);

	/*
	 *some_arr: the 1st argument is a memory address
	 * 1 -> 1 time (stands how many time)
	 *
	 * this means we are writing sizeof(some_arr) x 1
	 * in the file file_bin_array
	 * */

	fclose(file_bin_array);

	/* Now we start reading from the binary file */

	file_bin_array = fopen(bin_file_name,"rb");

	if(file_bin_array == NULL){
			fprintf(stderr,"file %s is not opened \n",bin_file_name);
		}

	printf("\t Start reading from the binary file %s",bin_file_name);

	/* before reading, we need to allocate for the array size*/
	float array_read[ARRAY_SIZE];

	fread(array_read,sizeof(array_read),1,file_bin_array);

	/*this means we are reading from the file_bin_array
	 *
	 * and store it in array_read
	 *
	 * */

	fclose(file_bin_array);

	printf("\t Printing content of array after binary reading \n");

	display_array(array_read,ARRAY_SIZE);




} /* End write_to_binary() */
