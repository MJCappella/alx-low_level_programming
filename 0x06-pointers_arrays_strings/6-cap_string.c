#include "main.h"
#include<stdio.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the converted string.
 */
int main(void){
char *cap_string(char *str)
	int word = 0;

	while (str[word])
	{
		while (!(str[word] >= 'a' && str[word] <= 'z'))
			word++;

		if (str[word - 1] == ' ' ||
		    str[word - 1] == '\t' ||
		    str[word - 1] == '\n' ||
		    str[word - 1] == ',' ||
		    str[word - 1] == ';' ||
		    str[word - 1] == '.' ||
		    str[word - 1] == '!' ||
		    str[word - 1] == '?' ||
		    str[word - 1] == '"' ||
		    str[word - 1] == '(' ||
		    str[word - 1] == ')' ||
		    str[word - 1] == '{' ||
		    str[word - 1] == '}' ||
		    index == 0)
			str[word] -= 32;

		word++;
	}

	return (str);
}
