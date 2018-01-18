#include <stdio.h>

int main(int argc, const char * argv[]) {

    int a = 0;
    
    int b = 1;
    
    // will assign 2 to both a and b
    a = b = 2;
    
    a = a + 1; // same effects
    a += 1;
    
    b = b - 1; // same effects
    b -= 1;
    
    int c = 0;
    int d = 0;
    
    // now c = 0
    printf("%d\n", c++); // increments c after the directive
    
    // now c = 1
    printf("%d\n", c);
    
    printf("%d\n", ++c); // increments c before the directive, now c = 2
    
    // --d, d-- follows the same pattern

    return 0;
}
