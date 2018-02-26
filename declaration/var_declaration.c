#include <stdio.h>

// variable declaration
// Now we can declare a variable but not define it.
extern int num;
// we declare a variable with the "extern" command


int main(void) {
    printf("The address of the int \"num\" is %p\n", &num); // this would fail without definition
   
}


// definition
int num = 12;
