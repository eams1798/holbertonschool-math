#include "simpson.h"

double simpson(double a, double b, int steps )
{
	int i;
	double x = a, Dx, fx, integral = 0;

	if (steps % 2 == 1)
		steps++;
	Dx = (b - a) / steps;
	for (i = 0;  i <= steps; i++)
	{
		fx = 1 / (1 + pow(x, 2));
		if (i != 0 && i != steps)
		{
			if (i % 2 == 1)
				fx *= 4;
			else
				fx *= 2;
		}
		integral += fx;
		x += Dx;
	}
	integral *= (Dx / 3);
	return (integral);
}
