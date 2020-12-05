#ifndef __CALCULATOR_OPERATIONS_H__
#define __CALCULATOR_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int add(int operand1, int operand2);

/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
int subtract(int operand1, int operand2);

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 * operand2
*/
int multiply(int operand1, int operand2);


/**
* multiplies the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
int divide(int operand1, int operand2);

/**
* divides the operand1 by operand2 and returns the quotient
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 % operand2
* @note returns 0 for divide by 0 error
*/
int modulo(int operand1, int operand2);

/**
* squares the operand1 by operand2 and returns the remainder 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1^2
* @note returns 0 for divide by 0 error
*/
int sqr(int operand 1);

/**
* cubes the operand1 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 ^3 operand2
* @note returns 0 for divide by 0 error
*/
int cube(int operand 1)

/**
* cubes the operand1 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the sqrt(operand1)
* @note returns 0 for divide by 0 error
*/
int squareroot(int operand1)

/**
* square roots the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the cuberoot(operand1)
* @note returns 0 for divide by 0 error
*/
int cuberoot(int operand1)
/**
* divides the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1^operand2
* @note returns 0 for divide by 0 error
*/
int exp(int operand1,int operand2)


#endif
