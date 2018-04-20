#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// my_calloc(num_of_item, size_of_elem) allocates memeory and initialize them to 0, return NULL if fails
// effects: allocates memory, needs to be manually freed.
// time: O(n) where n = num_of_item
void *my_calloc(int num_of_item, size_t size_of_elem);



int main(void) {
    int *a = calloc(10, sizeof(int));
    
    for (int i = 0; i < 10; i++) {
        printf("%d\n", a[i]);
    }
    free(a);
}
