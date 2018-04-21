#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// strncat, an alternative to strcat, stops when space of string runs out, hence is safer.

// my_strcat(dest, src) concatenates the contents of src at the end of dest
// requires: dest has enough size
// effects: mutates dest
// time: O(n) where n = strlen(src)
char *my_strcat(char *dest, const char *src) {
    strcpy(dest + strlen(dest), src);
    return dest;
}



int main(void) {
    char *str = "hello, world";
    printf("%s\n", str);
    char des[20] = "this is: ";
    
    my_strcat(des, str);
    printf("%s\n", des);
    
}
