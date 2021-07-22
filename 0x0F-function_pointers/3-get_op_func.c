#include "3-calc.h"

/**
 * get_op_func - selects operation
 * @s: operation selectedoperation to perform
 *
 * Return: pointer to a function matched
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op)
	{
		if (s[0] == ops[i].op[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
