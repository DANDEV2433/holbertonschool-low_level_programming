#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - correct function
 * @s: pointer to dog
 * @int: integer
 * @int: integer
 * description: function selects the correct function to perform the operation
 * Return: 0
 */
int (*get_op_func(char *s))(int, int);
{
	int i;

	if (s != "+, -, *, /, %")
	{
	return (NULL);
	}
	if (i = 0; i < s; i++)


	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    }op_t;
}
