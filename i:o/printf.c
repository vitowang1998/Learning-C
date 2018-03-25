#include <stdio.h>


// the return value of printf is the number of chars it prints
int main(void) {

    int num = 0;
    
    // will print "hello" and starts a new line
    num = printf("hello\n");
    
    printf("%d\n", num);
    
    
    // placeholder for printing a size_t variable
    printf("The size of an int is %zd.\n", sizeof(int));
    
    
    return 0;
}
