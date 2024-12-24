#ifndef __RAND_H__
#define __RAND_H__
#include <stdio.h>

double rand(void);

// Returns a psudorandom number between 0 and RAND_MAX
double randNormalize(void);

// Returns a psudorandom integer between left and right
int randInt(int left, int right);

// Returns a psudorandom double between left and right
double randReal(double left, double right);

// Seed in time(NULL)
void randomize(void);

#endif
