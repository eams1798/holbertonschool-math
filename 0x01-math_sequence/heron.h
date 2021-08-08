#ifndef HERON_H
#define HERON_H

#include <stdlib.h>

/**
 * struct s_cell - a struct to store an Heron sequence
 * @elt: the approximation of a square root of a number
 * @next: a pointer to the next node
 */
typedef struct s_cell
{
	double elt;
	struct s_cell *next;
} t_cell;

t_cell *heron(double p, double x0);

#endif
