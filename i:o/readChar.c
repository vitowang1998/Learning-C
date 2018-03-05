#include <stdio.h>
#include <stdbool.h>


// readChar(ignoreSpace) reads in a character from the user. It will
//      ignore a white space if ignoreSpace is true. It will not ignore
//      a white space if ignoreSpace is false.
// requires: valid input.
char readChar(bool ignoreSpace) {
    char c = 'a';
    int count = 0;
    
    if (ignoreSpace == true) {
        count = scanf(" %c", &c);
    } else {
        count = scanf("%c", &c);
    }
    
    if (count == 1) {
        return c;
    } else {
        printf("Error: Invalid Input");
    }
    return c;
}



int main(void) {
    char c = 'A';
    printf("%c\n", c);
    
    c = readChar(false);
    printf("%c\n", c);
    
   
}


