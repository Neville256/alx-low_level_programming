#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - execute the sum of all parameters.
* @n: The number of paramters passed to the function.
* @...: this  calculates the sum of  the variable.
*
* Return: If n == 0 - 0.
* Otherwise - the sum of all parameters.
*/
	int sum_them_all(const unsigned int n, ...)
	{
	va_list ap;
	unsigned int y, sum = 0;


	va_start(ap, n);


	for (y = 0; y < n; y++)
	sum += va_arg(ap, int);
	va_end(ap);


	return (sum);
}
