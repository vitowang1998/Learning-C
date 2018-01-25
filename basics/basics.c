// preprocessor instruction
#include <stdio.h> // stodio.h is a file
// stdio stands for "standard input/output library"
// it is the linker component that finds the library.


// ANSI standard
// "main" is the name of a function, the starting point of the program
int main(void) // A function returns an integer and takes in nothing.
{ // Start of function body
    printf("Hello, World!\n"); // way of outputing strings in C.
          // ↑ character string/ string constant
    
    int num = 123;
    
    
    // details in designing: %d
    printf("The number %d is such a good number\n",123); // \n will move the cursor to the beginning of the next line.
    
    printf("The number %d is such a good number",num); //
    
    printf("Trying out a new command\t");
    
    
    
    getchar(); // wait for a keystroke
    
    return 0; // returns the type specified at the function
    // this zero is returned to the OS
} // The end of a function body

// comment
/* comment */


// C is a low level language
// A low level language gives more control
// Programmers can write more efficient codes in low level languages
// possible to make huge mistakes (since they have more control)
// Easier to translate into machine code


// division "/" in C is integer division
// "%" remainder operator


// identifiers
// must start with a letter, can only contain letters, underscores and numbers








