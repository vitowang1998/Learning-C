#include <stdio.h>

// range of integer
const int min_int = -2147483648;
const int max_int = 2147483647;

int main() {
	printf("%d\n", min_int);
	printf("%d\n", max_int);
	return 0;
}

// For each definition of an integer in C,
// C makes use of 4 consecutive bytes (32 bits) to store the value
// and use the address of the first byte (which is an integer) as
// the pointer to the integer.
