#include "main.h"
/**
 * _strcat -concatenates two strings
 * @inp: input value
 * @onp: input value
 *
 * Return: void
 */
char *_strcat(char *inp, char *onp)
{
	int i;
	int j;

	i = 0;
	while (inp[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (onp[j] != '\0')
	{
		inp[i] = onp[j];
		i++;
		j++;
	}

	inp[i] = '\0';
	return (inp);
}

