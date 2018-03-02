#include <stdio.h>
#include <assert.h>

// floor_mechanism(n) gets the largest integer smaller or equal to n
int floor_mechanism(double n) {
    int x = n;
    return x;
}


int main(void) {
    assert(floor_mechanism(12.512212511) == 12);
    assert(floor_mechanism(12.99999) == 12);
    assert(floor_mechanism(12) == 12);
    assert(floor_mechanism(12.0000000) == 12);
    assert(floor_mechanism(13.0000001) != 12);
}

