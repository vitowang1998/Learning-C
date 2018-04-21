#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// strncpy, an alternative to strcpy, stops when space of string runs out, hence is safer.

// my_strcpy overwrites the contents of dest with contentes of scr
// requires: dest has enough size
// effects: mutates dest
// time: O(n) where n = strlen(src)
char *my_strcpy(char *dest, const char *src) {
    int i = 0;
    while (src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i + 1] = '\0';
    
    return dest;
}



int main(void) {
    char *str = "hello, world";
    printf("%s\n", str);
    char des[20];
    
    my_strcpy(des, str);
    printf("%s\n", des);
    
}
