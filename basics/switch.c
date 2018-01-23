#include <stdio.h>

// note that more than one branch of switch statement can be executed.
// if we want the switch to act like "else if", we should add "break;" after each case

int main(void) {

    int num = 0;
    
    switch (num) {
        case 0: {
            printf("number = %d\n", num);
            num = num + 1;
        }
        case 1: {
            printf("number = %d\n", num);
        }
    }
    
    
    
    return 0;
}
