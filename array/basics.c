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
    printf("%d.\n", array[len - 1]);
}


void buildArray(int len) {
    int array[len];
    int c = array[0];
}


int globalA1[10];


// Array is a built-in data structure in C.
// Every element in an array has the same type.

int main(void) {
    // We need know the length of the array before we declare it.
    int a1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printArray(a1, 10);
    
    // We cannot re-define an array if it is defined previously. (since a specific part of
    //      memory has been allocated for the array.
    /* it would fail:
    a1 = {0};
    */
    
    /* Of course, this would fail as well:
    int a1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    */
    
    // If we use len as the length of array, it will work, but if the len is a parameter,
    //      it won't work.
    int len = 10;
    // Uninitialzied local array is filled with random information on the stack.
    int a3[len];
    printArray(a3, 10);
    
    // Uninitialzied global array has every element equal to 0.
    printArray(globalA1, 10);
    
    // For the uninitialized portion in an partly-initialized array, they are zeros.
    int a2[5] = {1, 2, 3};
    printArray(a2, 5);
    
    
    // If the length of an array is not clearly stated, then its length equals to the number
    //      of elements in the initialization.
    int a4[] = {7, 16};
    printArray(a4, 2);
    // Note that the following line may or may not compile depending on your compiler,
    //      The length of a4 is only 2.
    printf("The third value in a4 is %d\n", a4[2]);
    
    // So this wouldn't work since the "definition of variable with array type needs an
    //      explicit size (like a1~3) or an initializer (like a4).
    /* won't compile
    int a5[];
     */
    
    // Length: number of elements in an array.
    // Size: Number of bytes in memory taken by the array.
    // Size = Length * sizeof(data_type)
    
    
    // Array, as a data structure, has a value which is equal to the address of the first
    //      element of it.
    int a5[10] = {0};
    printf("The value of a5[] is %p\n", a5);
    printf("The memory location of a5[] is %p\n", &a5);
    printf("The Memory location of a5[0] is %p\n", &a5[0]);
    
    
    
    
    
    
}
