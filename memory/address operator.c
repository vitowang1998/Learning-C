#include <stdio.h>

// Address operator (&)
// &x returns the memory location of x, even though x is not a variable

// Acutally, &x returns the memory location of x, as long as x is in the memory
// Memory = Code + Static + Heap + Stack

// num is stored in code
int num = 10;

int main(void) {
    // i is stored in stack, you can see that num's memory location and i's memory location differs hugely.
    int i = 1;
    
    printf("num = %d\n", num);
    printf("num is stored at %p\n", &num);
    
    printf("i = %d\n", i);
    printf("i is stored at %p\n", &i);
    printf("main() is stored at %p\n", &main);
}
