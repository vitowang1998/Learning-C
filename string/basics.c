#include <stdio.h>

// In C, a string is an array of characters ended by a null character.
// Null character = '\n'
// Null character is a char with value 0.

char null_character = '\0';


int main(void) {
    // Initializing a string
    
    char s1[] = {'a', 'b', 'c', 0};
    printf("s1 is %s.\n", s1);
    char s2[] = {'a', 'b', 'c', '\0'};
    printf("s2 is %s.\n", s2);
    
    
    
    char s[] = {'a', 'b', 'c', 0};
    printf("The value of s is %d\n", s);
}




