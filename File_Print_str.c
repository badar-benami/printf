#include "main.h"

/**
 * _strlen --- The length of a string is determined.
 * @s: C-string
 * Return: C-integer.
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

}

/**
 * _strlenc --- finds the length of a string but only for constant chars.
 * @s: C-string.
 * Return: C-integer.
 */

int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
