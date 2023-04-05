#include "main.h"
/**
 * _print_rev_recursion -function  Prints a string in reverse
 * @s: The string.
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *z)
{
	if (*z)
	{
		_print_rev_recursion(z + 1);
		_putchar(*z);
	}
}

