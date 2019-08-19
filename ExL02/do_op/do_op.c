#include "list.h"

void do_op(int p1, char operator, int p2)
{
	int res;
	
	if (operator == '+')
		res =  p1 + p2;
	if (operator == '-')
		res = p1 - p2;
	if (operator == '*')
		res = p1 * p2;
	if (operator == '/')
		res = p1 / p2;
	if (operator == '%')
		res = p1 % p2;
	printf("%d", res);
}