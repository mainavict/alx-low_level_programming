#include "3-calc.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * *op_add - returns the su of a and b
 * @a: first operand
 * @b: second operand
 * Return: sum and a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the differnce of a and b
 * @a: first operand
 * @b: second operand
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: First operand
 * @b: Second operand
 *
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_div - returns the result of the division of a by b
 * @a: First operand
 * @b: Second operand
 *
 * Return: Result of the division of a by b
 */
int op_div(int a, int b)
{
    return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: First operand
 * @b: Second operand
 *
 * Return: Remainder of the division of a by b
 */
int op_mod(int a, int b)
{
    return (a % b);
}
