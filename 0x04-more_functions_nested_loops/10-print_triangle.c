#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int z, y;

		for (z = 1; z <= size; z++)
		{
			for (y = z; y < size; y++)
			{
				_putchar(' ');
			}

			for (y = 1; y <= z; y++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

