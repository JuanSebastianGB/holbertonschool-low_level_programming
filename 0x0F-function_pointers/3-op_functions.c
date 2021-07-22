#include "3-calc.h"

/**
 * op_add - adds a and b
 * @a: first number
 * @b: second number
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substract a and b
 * @a: first number
 * @b: second number
 *
 * Return: substraction of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies a and b
 * @a: first number
 * @b: second number
 *
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide a and b
 * @a: first number
 * @b: second number
 *
 * Return: divition of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - gets the mod of a with b
 * @a: first number
 * @b: second number
 *
 * Return: mod of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
