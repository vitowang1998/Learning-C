#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// string literal
// all string literals are stored in "read-only" section in memory. (same as const char *)


const char *str3 = "hello";

int main(void) {
    char str[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    printf("%s\n", str);
    // we cannot modify a string literal. The behaviour is undefined.
    
    char str2[] = "This is a string";
    char *str3 = "This is a string";
    
    // str2 is an array of chars, it is possible to modify it
    strcpy(str2, "modified str");
    printf("%s\n", str2);
    
    // but str3 is a string literal, which means that we cannot modify it
    strcpy(str3, "modified str");
    
    
}
