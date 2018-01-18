#include <stdio.h>

int main(void) {
    // an unsigned/uninitialized int a
    int a;
    printf("%d\n", a);
    
    // an unsigned/uninitialized float b
    float b;
    printf("%f\n", b);
    
    // an unsigned/uninitialized float b
    char c;
    printf("%c\n", c);
    
    // etc.
    long d;
    printf("%ld\n", d);
    
    short e;
    printf("%hu\n", e); // %d also works in C99
    
    double f;
    printf("%f\n", f);
    
    long double g;
    printf("%Lf\n", g);
    
    // prints hexadecimal
    printf("%x\n", 123);
    
    // Octal representation
    printf("%o\n", 123);
    
    
    
    
    
    
}
