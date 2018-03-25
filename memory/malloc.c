#include <stdio.h>
#include <stdlib.h>
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

void *malloc(size_t s);
// malloc(s) is a built-in function that performs memory allocation in C.
// It takes s bytes from the heap and return a pointer to it.
// It returns null once there is not enough memory on the heap.
// time: O(1)

int main(void) {
    // We should always use sizeof when performing malloc.
    int *array = malloc(10 * sizeof(int));

    // The heap memory is unitialized.
    print_array(array, 10);
    print_array(array, 10);
    
    
    
    return 0;
}
