#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @inp: value
 * @onp: value
 * @k: value
 *
 * Return: inp
 */
char *_strncat(char *inp, char *onp, int k)
{
	int i;
	int j;

	i = 0;
	while (inp[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < k && onp[j] != '\0')
	{
	inp[i] = onp[j];
	i++;
	j++;
	}
	inp[i] = '\0';
	return (inp);
}
