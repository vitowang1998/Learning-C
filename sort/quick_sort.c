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
void swap(int *a, int *b) {
    assert(a);
    assert(b);
    int temp = *a;
    *a = *b;
    *b = temp;
}


static void quick_sort_range(int a[], int first, int last) {
    if (last <= first) {
        return;
    }
    int pivot = a[first];
    int cur_index = last;
    
    for (int i = last; i > first; i--) {
        if (a[i] > pivot) {
            swap(&a[i], &a[cur_index]);
            cur_index--;
        }
    }
    
    swap(&a[first], &a[cur_index]);
    quick_sort_range(a, first, cur_index - 1);
    quick_sort_range(a, cur_index + 1, last);
}



// quick_sort(array[], left, right) sorts the array[] in between (and including) left and right
// requires: array[] is vaild array pointer
//           left >= 0
//           right >= 0
//           right >= left initially
// effects: mutate array[]
// time: O(nlogn) average, O(nlogn) best case, O(n^2) worst case, where n is the length of array[]
void quick_sort(int a[], int len) {
    quick_sort_range(a, 0, len - 1);
}




int main(void) {
    int a[10] = {5, 2, 54, 1245, 64, 66, 98, 12, 75, 7};
    print_array(a, 10);
    
    
    quick_sort(a, 0, 9);
    print_array(a, 10);
    
}
