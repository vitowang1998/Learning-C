#include <stdio.h>
#include <assert.h>

// function pointer

void demoFn(int x) {
    printf("%d\n", x);
}


int main(void) {
    // it is good style to initialize a ptr to NULL.
    void (*fnptr) (int) = NULL;
    // The value of fnptr is assigned the address of function "demoFn"
    fnptr = demoFn;
    fnptr(15);
    
    // and this would fail
    // *fnptr(15)
    
    printf("Address of demoFn: %p\n", &demoFn);
    printf("Value of fnptr: %p\n", fnptr);
    printf("Address of fnptr: %p\n", &fnptr);
    
    // As you can see, "demoFn" and "fnptr" are clearly stored at two
    //      different sections in memory. In fact, "demoFn" is stored
    //      in the "code" section and "fnptr" is stored in the "stack"
    //      section.
    
}


