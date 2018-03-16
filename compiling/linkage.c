// Linkage
// Linkage describes how identifiers in a C program can or cannot refer to the same
//      object in the entire program or in a translation unit.


// Translation unit
// A translation unit serves as the "input" of our C compilers.
// A translation unit is the file after the preprocessing process.
// (preprocessing is talked in the compile.c file).


// External Linkage
// The indentifier is created somewhere else than the current file (translation
//      unit). This implies that we should use the "extern" directive. And that
//      means the indentifier is VISIBLE to every other tranlation units.
// When we use the "extern" directive, the linker will look for the DEFINITION
//      of the specific identifier in other files.
// The above explanation implies that the DECLARATION of an indentifier with
//      external linkage does not take up any space. This illustrates the reason
//      why we fails to get the value of a declared but not defined.
//      (See modularization folder for details).
// All global variables are externally linked unless we limit it with the "static"
//      command.


// Internal Linkage
// Internal linkage refers to a situation where the variable is defined within the
//      scope of the translation unit. This implies that the identifiers are not
//      ACCESSIBLE or VISBLE outside the translation unit.
// We should use the "static" directive to apply internal linkage.
// As discussed in "scope.c" file in this repository, "static" variables have module
//      scope.
// ALl constant global variables are internally linked. We can choose to link it
//      externally with the "extern" directive.



// None Linkage
// None linkage refers to a situation where the variable is defined within the function
//      scope. Hence the variable is NEITHER ACCESSIBLE NOR VISIBLE outside the function
//      since the variable is automatically distroyed on the stack after the function
//      returns.
//      (This is also discussed in the scope.c file in this repository.





