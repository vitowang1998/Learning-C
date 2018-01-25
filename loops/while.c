#include <stdio.h>



int main(void) {

    int num = 10;
    
    // execute the compound statements if the condition is true
    // true: value not being 0
    while (num > 0) {
        printf("%d\n", num);
        num -= 1;
    }
    
    
    
    return 0;
}
