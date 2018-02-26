#include <stdio.h>


// readInt() reads in an integer from the user.
// requires: valid input.
int readInt(void) {
    int i = 0;
    int count = scanf("%d", &i);
    if (count == 1) {
        return i;
    } else {
        printf("Error. Invalid input.\n");
        return -1;
    }
}



int main(void) {
    int i = 0;
    printf("i = %d\n", i);
    
    i = readInt();
    
    printf("i = %d\n", i);
}


