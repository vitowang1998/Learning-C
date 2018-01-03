// preprocessor instruction
#include <stdio.h> // stodio.h is a file


// ANSI standard
// "main" is the name of a function
int main(void) // A function returns an integer and takes in nothing.
{ // Start of function body
    printf("Hello, World!\n"); // way of outputing strings in C.
    
    
    int num = 123;
    
    
    // details in designing: %d
    printf("The number %d is such a good number,\n",123); // \n will move the cursor to the beginning of the next line.
    
    printf("The number %d is such a good number,",num); //
    
    getchar(); // wait for a keystroke
    
    return 0; // returns the type specified at the function
} // The end of a function body

// comment
/* comment */
