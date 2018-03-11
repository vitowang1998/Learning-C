#include <stdio.h>
#include <assert.h>

// print_array(array[], len) prints the elements in arrary
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



// swap(*a, *b) swaps the value of *a and *b
// requires: a, b are valid pointers
// effects: mutate the value of *a and *b
// time: O(1)
void swap(int * a, int * b) {
    assert(a);
    assert(b);
    int temp = *a;
    *a = *b;
    *b = temp;
}




// quick_sort(array[], left, right) sorts the array[] in between (and including) left and right
// requires: array[] is vaild array pointer
//           left >= 0
//           right >= 0
//           right >= left initially
// effects: mutate array[]
// time: O(nlogn) average, O(nlogn) best case, O(n^2) worst case, where n is the length of array[]
void quick_sort(int array[], int left, int right) {
    // Assertions
    assert(array);
    assert(left >= 0);
    assert(right >= 0);
    
    if (left >= right) {
        return;
    }
    
    int pivot = array[left];
    int current_index = right;
    
    for (int i = 1; i < right; i++) {
        if (array[i] > pivot) {
            swap(&array[i], &array[current_index]);
            current_index--;
        }
    }
    
    swap(&array[current_index], &array[left]);
    quick_sort(array, left, current_index - 1);
    quick_sort(array, current_index + 1, right);
}




int main(void) {
    int a[10] = {5, 2, 54, 1245, 64, 66, 98, 12, 75, 7};
    print_array(a, 10);
    
    
    quick_sort(a, 0, 9);
    print_array(a, 10);
    
}
