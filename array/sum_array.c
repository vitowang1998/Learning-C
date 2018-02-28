#include <stdio.h>
#include <assert.h>


// sumArray(*array, size) sums all elements in an "array" with length of "size"
// requires: *array and size is valid.
// Time: O(n) where n is size.
int sumArray(const int array[], int size) {
    assert(array);
    assert(size);
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}


// sumArray(*array, size) sums all elements in an "array" with length of "size"
// requires: *array and size is valid.
// Time: O(n) where n is size.
int sumArray2(const int * array, int size) {
    assert(array);
    assert(size);
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(array + i);
    }
    return sum;
}




int main(void) {

    int array[101];
    for (int i = 0; i < 101; i++) {
        array[i] = i;
    }
    printf("Sum = %d\n", sumArray(array, 101));
    
    
}

