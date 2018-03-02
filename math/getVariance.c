#include <stdio.h>
#include <assert.h>


// getVariance(a[], len) gets the variance of a[]
// requires: length is valid
// time: O(n) where n = len
double getVariance(const int a[], int len) {
    double sum = 0;
    double result = 0;
    for (int i = 0; i < len; i++) {
        sum += (a[i] * a[i]);
    }
    result = sum / len - ((mean(a, len)) * (mean(a, len)));
    
    /* debug
     printf("variance = %f\n", result);
     */
    
    return result;
}



int main(void) {
    
}

