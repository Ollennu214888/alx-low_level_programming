#include "main.h"
/**
 * _memset - fill  block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: bytes filled
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i< n; i++)
	{
		*(s + 1) = b;
		
	}
	return (s);
}
