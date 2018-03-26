#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>


// read_string(void) reads a string ending with EOF from Input Stream. It returns
//      NULL if reading fails.
// requires: IO
// effects: allocate memory, mutate array
// time: O(n) where n is the size of input
char *read_string(void) {
    char c = 0;
    int length = 0;
    int max_length = 1;
    char *string = malloc(max_length * sizeof(char));
    // reads the Input Stream
    while (true) {
        if (scanf("%c", &c) != 1) {
            break;
        }
        if (length == max_length) {
            max_length *= 2;
            string = realloc(string, max_length * sizeof(char));
        }
        length++;
        string[length - 1] = c;
    }
    
    length++;
    string[length] = '\0';
    return string;
}


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


int main(void) {
    char *str = read_string();
    print_string(str, strlen(str));
    
}
