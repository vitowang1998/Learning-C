#include <stdio.h>
#include <assert.h>



int main(void) {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // The array indexing sign [] is an operator, it means *(a + i)
    // Meanwhile, since it is addition, it allows constant-time access to every element in a.
    printf("The value of a[5] is %d.\n", a[5]);
    
    printf("The value of *(a + 5) is %d.\n", *(a + 5));
}
