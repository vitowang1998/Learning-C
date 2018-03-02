#include <stdio.h>
#include <assert.h>

// sqrt_mechanism(n) computes the square root of n
// requires: n >= 0
double sqrt_mechanism(double n) {
    assert(n >= 0);
    double x = n / 2;
    for (int i = 0; i < 6; i++) {
        x = (x + n / x) / 2;
    }
    return x;
}


int main(void) {

    assert(1.414 < sqrt_mechanism(2) < 1.415);
    assert(1.732 < sqrt_mechanism(3) < 1.733);
    
    
}

