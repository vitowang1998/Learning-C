// 1 Byte = 8 bits
// Each bit has two possible values 0 or 1

// example of a byte
// 01000000
// 00110101
// 10101001

// Memeory address is a number
// expressed in hexadecimal

// For each MB of memory
// Address of first byte: 0x0
// Address of last byte: 0xFFFFF


// A variable is a reference to a specific memory location

#include <stdio.h>

int main (void) {
    int a = 0;
    printf("%d\n", sizeof(a));
    return 0;
}
