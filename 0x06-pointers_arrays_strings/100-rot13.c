#include "main.h"
#include <stdio.h>

/**
 * rot13 -  string encoder using rot13
 * @k: pointer to string given
 *
 * Return: *k
 */

char *rot13(char *k)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; k[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (k[i] == data1[j])
			{
				k[i] = datarot[j];
				break;
			}
		}
	}
	return (k);
}

