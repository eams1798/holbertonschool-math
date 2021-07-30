#include "holberton.h"

/**
 * display_complex_number - displays a complex number
 * @c: a complex number
 *
 * Return: Nothing
 */
void display_complex_number(complex c)
{
	printf("%lg", c.re);
	if (c.im != 0)
	{
		if (c.im != 0)
		{
			if (c.im > 1 || (c.im < 1 && c.im > 0))
				printf(" + %lgi", c.im);
			else if (c.im == 1)
				printf(" + i");
			else if (c.im == -1)
				printf(" - i");
			else if (c.im < -1 || (c.im > -1 && c.im < 0))
				printf(" - %lgi", c.im * (-1));
		}
		else
			printf("%lgi", c.im);
	}
	printf("\n");
}
