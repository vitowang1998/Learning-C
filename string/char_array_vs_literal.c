#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void) {
    // this is an array of char, hence it can be modified.
    char str1[] = "hello, world";
    str1[10] = 'Z';
    printf("%s\n", str1);
    
    
    // This is a pointer to a string literal, hence cannot be modified
    char *p = "another string";
}



