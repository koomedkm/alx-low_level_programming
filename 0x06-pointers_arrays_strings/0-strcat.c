#include "main.h"

/**
 *strcat - adding two lines together
 *@dest: first word
 *@src: second word
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}

