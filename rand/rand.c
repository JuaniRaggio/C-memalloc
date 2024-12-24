#include <time.h>
#include "rand.h"

double rand() {
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

