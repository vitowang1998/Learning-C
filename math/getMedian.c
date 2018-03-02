#include <stdio.h>
#include <assert.h>


// getMedian(a[], len) gets the median of a[]
// requires: length is valid, a is sorted
// time: O(1)
int getMedian(const int a[], int len) {
    assert(len > 0);
    // odd
    if (len % 2 == 1) {
        return a[len / 2];
    } // even
    else {
        return (a[len / 2 - 1] + a[len / 2]) / 2;
    }
}


int main(void) {
    
    int a1[5] = {0, 1, 2, 3, 4};
    assert(getMedian(a1, 5) == 2);
    
    int a2[99] = {0};
    for (int i = 0; i < 99; i++) {
        a2[i] = i + 1;
    }
    assert(getMedian(a2, 99) == 50);
    
    int a3[100] = {0};
    for (int i = 0; i < 100; i++) {
        a3[i] = i + 1;
    }
    assert(getMedian(a3, 99) == 50);
    
}

