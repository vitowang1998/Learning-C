#include <stdio.h>
#include <assert.h>

// print_array(array[], len) prints the elements in arrary
// note: This function is particularly useful when debugging
//      array-related functions.
// requires: array is valid array with length len.
//           len > 0
// time: O(n) where n is the length of array.
void print_array(int array[], int len) {
    assert(array);
    assert(len > 0);
    for (int i = 0; i < len - 1; i++) {
        printf("%d, ", array[i]);
    }
    printf("%d.\n", array[len - 1]);
}


