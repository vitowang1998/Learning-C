#include <stdio.h>


// printf is O(1)
// However, when printf() takes a string, it's O(n) where n is the length of the string

// the return value of printf is the number of chars it prints
int main(void) {

    int num = 0;
    
    // will print "hello" and starts a new line
    num = printf("hello\n");
    
    printf("%d\n", num);
    
    // placeholder for int type
    printf("An int: %d\n", 15);
    
    // placeholder for char type
    printf("A char: %c\n", a);
    
    // placeholder for pointer type
    printf("A pointer: %p\n", NULL);
    
    // placeholder for string type
    printf("A string %s\n", "abc");
    
    // placeholder for printing a size_t variable
    printf("The size of an int is %zd.\n", sizeof(int));
    
    
    return 0;
}
