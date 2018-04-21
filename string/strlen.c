#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

// my_strlen(str) returns the length of [str], 0 if encountered empty string
// time: O(n) where n = my_strlen(str)
int my_strlen(const char *str) {
    int len = 0;
    int i = 0;
    
    if (str == NULL) { //empty string
        return len;
    }
    
    while (str[i] != '\0') {
        len++;
        i++;
    }
    return len;
}

int main(void) {
    char s1[] = {'a', 'b', 'c', 0};
    printf("s1 is %s.\n", s1);
    char s2[] = {'a', 'b', 'c', '\0'};
    printf("s2 is %s.\n", s2);
    
    printf("The length of s1 is %lu\n", strlen(s1));
    printf("The length of s1 is %d\n", my_strlen(s1));
    
    char s4[] = {};
    
    printf("The length of s4 is %lu\n", strlen(s4));
    printf("The length of s4 is %d\n", my_strlen(s4));
    
}
