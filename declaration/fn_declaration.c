#include <stdio.h>

// function declaration
// Now we can declare the function but not
void printNum(int n);


int main(void) {
    printf("The address of the function \"printNum\" is %p\n", &printNum); // this would fail without definition
   // printNum(15);
}


// function definition
void printNum(int n) {
    printf("The number is %d\n", n);
}

