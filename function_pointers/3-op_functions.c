#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - sum operate
 * @a : integer
 * @b : integer
 * description : returns the sum of a and b
 * return : 0
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - difference operate
 * @a : integer
 * @b : integer
 * description : returns the difference of a and b
 * return : 0
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - product operate
 * @a : integer
 * @b : integer
 * description : returns the product of a and b
 * return : 0
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - division operate
 * @a : integer
 * @b : integer
 * description : returns the division of a and b
 * return : 0
 */
int op_div(int a, int b)
{
if (a == 0)
{
	printf("Error\n");
	exit(100);
}
return (a / b);
}
/**
 * op_mod - remainder division operate
 * @a : integer
 * @b : integer
 * description : returns the remainder division of a and b
 * return : 0
 */
int op_mod(int a, int b)
{
if (a ==0)
{
	printf("Error\n");
	exit(100);
}
return (a % b);
}
