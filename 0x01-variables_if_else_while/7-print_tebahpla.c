#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints the lowercase alphabet in reverse'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}
	putchar(0);
	return (0);
}
