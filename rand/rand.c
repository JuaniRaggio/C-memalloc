#include <time.h>
#include "rand.h"

// Default seed value
static unsigned long customizableSeed = 1;

void srand(unsigned int seed) {
    customizableSeed = seed;
}

double rand(void) {
    // TBD: Alorithm used: either linear congruential generator or research better options
    return 0;
}

double randNormalize(void){
    return rand() / ((double) RAND_MAX + 1);
}

int randInt(int left, int right){
    return (int)(randNormalize() * (right - left + 1)) + left;
}

double randReal(double left, double right){
    return (randNormalize() * (left - right) + left);
}

void randomize(void){
    srand((int)time(NULL));
}

