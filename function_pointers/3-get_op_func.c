#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - selects the correct function to perform
 * @s: operator passed as argument
 * description: selects the correct function to perform the operation
 * Return: pointer to the function that corresponds
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
	int i = 0;

	/* Loop to browse the array of operators */
	while (ops[i].op != NULL)
	{
	/* If the current operator == the operator passed as an argument */
	if (*(ops[i].op) == *s)
	/* Returns the function associated with this operator */
	return (ops[i].f);
	/* Passes the next operator in the tab */
	i++;
	}
	return (NULL);
}
