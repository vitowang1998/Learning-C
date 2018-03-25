#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>


// print_string(*str, strlen) prints a string with length strlen.
// requires: *str is valid
//           strlen > 0
// effects: print out a string
// time: O(n) where n is strlen
void print_string(char *str, int strlen) {
    assert(str);
    assert(strlen > 0);
    
    for (int i = 0; i < strlen; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}


