#include "3-calc.h"
/**
 * get_op_func - function pointer that selects the correct
 * fucntion to perform an operation
 * @s: operator passed as argument to program
 * Return: pointer to function corresponding to the
 * operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int j;

	j = 0;

	while (ops[j].op)
	{
		if (strcmp(ops[j].op, s) == 0)
			return (ops[j].f);
		j++;
	}
	return (NULL);
}
