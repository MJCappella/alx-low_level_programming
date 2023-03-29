#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase letters
 * @k: pointer to a variable
 *
 * Return: k
 */
char *string_toupper(char *k)
{
	int i;

	i = 0;
	while (k[i] != '\0')
	{
		if (k[i] >= 'a' && k[i] <= 'z')
			k[i] = k[i] - 32;
		i++;
	}
	return (k);
}

