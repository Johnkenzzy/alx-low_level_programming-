/* A function that prints an integer */
#include "main.h"

	/**
	* print_number - prints an integer
	* @arg n - the integer
	* returns nothing
	*/void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
