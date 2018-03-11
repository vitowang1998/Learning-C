#include <stdio.h>
#include <assert.h>

// swap(*a, *b) swaps the value of *a and *b
// requires: a, b are valid pointers
// effects: mutate the value of *a and *b
// Time: O(1)
void swap(int * a, int * b) {
    assert(a);
    assert(b);
    int temp = *a;
    *a = *b;
    *b = temp;
}


// selectionSort(a[], len) sorts an array of integers "a" with length "len"
// requires: valid a, valid length
// effects: mutate the entries in a
// Time: O(n^2) in all cases where n is the length of a[].
void selectionSort(int a[], int len) {
    assert(a);
    assert(len > 0);
    int smallestIndex = 0;
    for (int i = 0; i < len - 1; i++) {
        smallestIndex = i;
        for (int j = i + 1; j < len; j++) {
            if (a[j] < a[smallestIndex]) {
                smallestIndex = j;
            }
        }
        swap(&a[i], &a[smallestIndex]);
    }
}




int main(void) {
    int a[100] = {0};
    for (int i = 0; i < 100; i++) {
        a[i] = 100 - i;
    }
    for (int i = 0; i < 100; i++) {
        printf("%d ", a[i]);
    }
    
    printf("\nnow sorted \n");
    
    selectionSort(a, 100);
    for (int i = 0; i < 100; i++) {
        printf("%d ", a[i]);
    }
}

