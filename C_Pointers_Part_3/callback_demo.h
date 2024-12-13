#pragma once


void run_callback_demo(void);


/* Some helper function */

float cb_add(float nb1, float nb2);

float cb_multiply(float nb1, float nb2);

/* Here I define a function pointer
 *
 * name: op_t (_t for typedef)
 * - input: nb_1;nb_2 of type float
 * - return type: float
 *
 * */
typedef float (*op_t)(float nb1,float nb2);

/*
 * Since now I am using typedef
 * in the function that uses the callback
 * we use : op_t (as the type), and op as the name of the instance
 *
 * Note: see the the explanation of without typedef
 *  - this the more implicit
 *
 * */
float compute(float nb1,float nb2, op_t op);

/*
 * without typedef
 *
 * - float compute(float nb1,float nb2,
 * 				  float (*op)(float nb1,float nb2));
 *
 *
 * */




