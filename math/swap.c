#include <stdio.h>
#include <assert.h>
// Unlike Pascal, C does not allow a function to return multiple values.
// We use pointers when we have such needs.



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


int main(void) {

}

