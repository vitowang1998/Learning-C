// scanf
// The return value of scanf is the number of values it successfully scans.
// scanf is O(1)
// However, when scanf scans a string, it's O(n) where n is the length of string

#include <stdio.h>



int main(void) {
    int i = 0;
    printf("i = %d\n", i);
    scanf("%d", &i);
    printf("i = %d\n", i);
}

