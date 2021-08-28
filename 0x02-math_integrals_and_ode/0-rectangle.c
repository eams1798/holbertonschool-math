#include "rectangle.h"

double rectangle_method(double a, double b, int steps )
{
	int i;
	double x = a, dx = (b - a) / steps, fx, area = 0;

	for (i = 0; i < steps; i++)
	{
		fx = 1 / (1 + pow(x, 2));
		area += (fx * dx);
		x += dx;
	}
	return (area);
}
