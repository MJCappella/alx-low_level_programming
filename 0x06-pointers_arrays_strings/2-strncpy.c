#include "main.h"
/**
 * _strncpy - copy a string
 * @inp: input value
 * @onp: input value
 * @o: input value
 *
 * Return: dest
 */
char *_strncpy(char *inp, char *onp, int o)
{
	int j;

	j = 0;
	while (j < o && onp[j] != '\0')
	{
		inp[j] = onp[j];
		j++;
	}
	while (j < o)
	{
		inp[j] = '\0';
		j++;
	}

	return (inp);
}
