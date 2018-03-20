#include <stdio.h>
#include <assert.h>


// array_map replaces every element in array[i] with f(array[i]) [Same as map in Racket/Scheme/Lisp]
// requires: *f is valid function with only one integer parameter
//           array[] is valid
//           len is the length of array[].
// effects: mutate the value array[]
void array_map(int (*f)(int), int array[], int len) {
    /* assertions */
    assert(f);
    assert(array);
    assert(len >= 0);
    
    for (int i = 0; i < len; i++) {
        array[i] = f(array[i]);
    }
}

