#include <stdio.h>
#include <assert.h>

// pointer arithmetics

// Addition (p is a pointer and i is an int)
// p + i = p + i(sizeof(*p))
// p - i = p - i(sizeof(*p))


// If p and q are two pointers
// we cannot add p and q
// we can do p - q
// p - q = (p - q) / sizeof(*p) : number of data of type of *p between p and q




int main(void) {
    int n = 10;
    int *p = &n;
    printf("The pointer p points at %p\n", p);
    p += 1;
    printf("The pointer p points at %p\n", p);
    p += 1;
    printf("The pointer p points at %p\n", p);
    p -= 1;
    printf("The pointer p points at %p\n", p);
    
    
    int n1 = 0;
    int n2 = 10;
    int n3 = 15;
    int n4 = 18;
    
    int *p1 = &n1;
    int *p2 = &n4;
    
    int diff = p1 - p2;
    // Note that p1 is greater than p2 but n1 is defined prior to n2
    // This is because that stack is used from bottom to the top
    printf("The pointer p1 points at %p\n", p1);
    printf("The pointer p2 points at %p\n", p2);
    printf("The difference between p1 and p2 is %d\n", diff);
    
    // We can compare pointers
    if (p2 <= p1) {
        puts("p2 is smaller than p1");
    }
    

    
}

