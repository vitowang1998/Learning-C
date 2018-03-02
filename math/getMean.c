#include <stdio.h>
#include <assert.h>


// getMean(a[], len) gets the mean of a[]
// requires: length is valid
// time: O(n) where n = len
double getMean(const int a[], int len) {
    assert(len >= 0);
    
    double sum = 0;
    for (int i = 0; i < len; i++) {
        sum += a[i];
    }
    double result = sum / len;

    /* debug
     printf("mean = %f\n", result);
     */

    return result;
}



int main(void) {
    
}

