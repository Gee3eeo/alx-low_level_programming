#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * Print_rev - Prints a string in reverse order
 * @s: String to reverse
 *
 * Description: Prints a string in reverse order
 * Return: returns nothing
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
	{
		putchar(*(s + len));
	}
	putchar(10);
}
