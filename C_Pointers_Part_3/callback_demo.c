

#include "callback_demo.h"

#include <stdio.h>

void run_callback_demo(void){

	printf("\t Running Callback demo \n \n");


	/*choosing some input*/
	float nb_1 = 2.5 , nb_2 = 2.5;


	printf(" \t -Adding result = %f \n",compute(nb_1,nb_2,cb_add));

	printf("\t -Multiply result = %f \n",compute(nb_1,nb_2,cb_multiply));


} /* End run_callback_demo() */



/*
 *
 * the cb_add() and cb_multiply()
 * can be callback by compute(), which
 * accepte a function name (through function pointer)
 *
 * */

float cb_add(float nb1, float nb2){

	return nb1 + nb2;
}

float cb_multiply(float nb1, float nb2){

	return nb1 * nb2;

}


float compute(float nb1,float nb2, op_t op){

//float compute(float nb1,float nb2, float (*op)(float nb1, float nb2)){

	/*
	 * notice that for a callback function (the op()):
	 *
	 * the arguments of function pointer are the same before
	 * in compute()
	 * 	- that is float nb1, float nb2 are present in both
	 *
	 *
	 * */
	return op(nb1,nb2);

	/*
	 * This statement implies that I will callback
	 * whatever function I am passed in, throughout
	 * the function pointer op_t op()
	 *
	 * */


}
