#include "Holberton.h"
/**
  *_isdigit - a function that checks for a digit from 0 through 9
  *@C: variable type int
  *Return 1 for digit 0 otherwise
  */
	int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
