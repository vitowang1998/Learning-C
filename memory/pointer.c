// pointer
// the size of a pointer is 8 bytes regardless what data type it points at

// The invalid pointer is denoted as NULL
// If we try to dereference the NULL, our program will crash.

// Indirection/Dereference Operator *
// if p is a pointer, *p produces the value p points at
// however, pointer p cannot points at itself (unless p is void*)



#include <stdio.h>

int main(void) {
    
    puts("hello, world\n%d");
    
    
    
    int num = 15;
    int *p = &num; // p points to num
    printf("num = %d\n", num);
    printf("p* = %d\n", *p);
    printf("num is stored at %p\n", &num);
    printf("p = %p\n", p);
    printf("p is stored at %p\n\n\n", &p);
    
    // if we modify the pointer
    *p = 16;
    // the value of num, *p will all be changed
    // but the memory location p points to remains the same
    printf("num = %d\n", num);
    printf("p* = %d\n", *p);
    printf("num is stored at %p\n", &num);
    printf("p = %p\n", p);
    printf("p is stored at %p\n\n\n", &p);
    
    int num2 = 20;
    // modify the memory location p points to
    p = &num2;
    printf("num = %d\n", num);
    printf("p* = %d\n", *p);
    printf("num2 is stored at %p\n", &num2);
    printf("p = %p\n", p);
    printf("p is stored at %p\n\n\n", &p);
    
    
    
    int **p2 = &p; // p2 is a pointer points to a pointer(p) which points to an integer
    **p2 = 21;
    printf("num = %d\n", num);
    printf("p* = %d\n", *p);
    printf("num2 is stored at %p\n", &num2);
    printf("p = %p\n", p);
    printf("p is stored at %p\n\n\n", &p);
    
    
    int special = *p * *p;
    printf("special = %d\n", special);
    
    
    
    // a void pointer can point at anything. We can view it as a generic pointer
    // an example
    void *pvoid;
    pvoid = &special;
    
    // the following directive will crash:
    printf("*pvoid = %d\n", *pvoid);
    // because we cannot directly dereference a void pointer, we have to first assign the pointer value to some pointer else.
    
    
    // We should initialize any unused pointers to point at NULL
    // The program will crash if we try to dereference NULL
    // NULL is a value and NULL = 0 = true
    
}

