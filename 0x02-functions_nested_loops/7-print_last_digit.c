#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - print last digit of integer
 * @nld: number's last digit result
 * Return: The last digit
 */

int print_last_digit(int)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
