#include <stdio.h>

// range of integer
const int min_int = -2147483648;
const int max_int = 2147483647;


// can_add(a, b) tests if we can safely add integer a and b together
//  without causing an overflow. It returns true if we can, false if
//  not.
bool can_add(int a, int b) {
    if (a > 0 && b > (max_int - a)) {
        return false;
    } else if (a < 0 && b < (min_int - a)) {
        return false;
    } else {
        return true;
    }
}


int main() {
	printf("%d\n", min_int);
	printf("%d\n", max_int);
	return 0;
}

// For each definition of an integer in C,
// C makes use of 4 consecutive bytes (32 bits) to store the value
// and use the address of the first byte (which is an integer) as
// the pointer to the integer.

// The Essence of Overflow
// C uses 4 consecutive bytes (32 bits in total) to store an integer
// Each bit has a state of being either 1 or 0
// So that each int has 2^32 different possible representations
// When we exceed the limit (-2147483648 or 2147483647), we need at least
// one an extra bit from next byte (which we don't have), hence a overflow happens.


// In most cases, when an overflow happens, the integer value will -2^32, however, this behaviour varies on different platforms and compilers. By ANSI standard, the behaviour of an overflowed integer is undefined. We hence should never try to estimate the potential behaviour of an overflowed datatype.





