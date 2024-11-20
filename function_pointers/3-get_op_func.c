#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - correct function
 * @s: char
 * @int: integer
 * @int: integer
 * description: function selects the correct function to perform the operation
 * Return: 0
 */
int (*get_op_func(char *s))(int, int);
{
	int i;

	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    	};
{
	while (ops[i].op != NULL)
	{
	if (*(ops[i].op) == *s)
	return ops[i].f;
	i++;
	}
	return (NULL);
}
