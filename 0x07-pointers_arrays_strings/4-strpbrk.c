#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: first string
 * @accept: second
 * Return: a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
		int b;

		while (*s)
		{
			for (b = 0; accept[b]; b++)
			{
			if (*s == accept[b])
			return (s);
			}
		s++;
		}

	return ('\0');
}
