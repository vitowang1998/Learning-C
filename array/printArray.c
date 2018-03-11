#include <stdio.h>
#include <assert.h>

// printArray(array[], len) prints the elements in arrary
// requires: array is valid array with length len.
//           len > 0
// time: O(n) where n 
void printArray(int array[], int len) {
    assert(array);
    assert(len > 0);
    for (int i = 0; i < len - 1; i++) {
        printf("%d, ", array[i]);
    }
    printf("%d.\n", array[len]);
}




// Array is a built-in data structure in C.

int main(void) {
    int array[5] = {1, 2, 3};
    
    printArray(array, 5);
    
    
}
