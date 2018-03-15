#include <stdio.h>
#include <assert.h>



// Basically, there are 3 types of programming languages
// 1. Compiling: like C, C++,
// 2. Interpreting: like Racket/Scheme/Lisp, Python, JavaScript
// 3. Use a virtual machine: like Java, C#

// The process of compiling C is to "translate" C into machine code that the OS
//      can understand

// When the compilation is finished, the names of variables and functions do not
//      exist anymore. Everything is referred to as address.



// Code of interpreting languages are "translated" into while the program
//      is running.



// There are several steps in compiling code.
// 1. Preprocessing
//      #include directive copy the required files to the top of the code.
// 2. Compiling
//      .c file -> .o file (object file). Object is very close to yet not machine
//      code. It includes some global identifiers since their addresses are still
//      unknown. It also includes two lists of identifiers required and provided by
//      the .c file.
// 3. Linking
//      All .o files are combined together and every global indentifier is assigned
//      with an address. Now the files are combined into an executable file.
//      The executable (.exe in Windows) file contains 3 sections: Code,
//      global data, and read-only data section. The linker makes sure that every
//      identifer required by some file is provided by some file. Meanwhile, there
//      should be no identifiers with the same name. At the same time, there should
//      be a "main" function as the entry point of the entire program.


int main(void) {
    

    
}



