#include <stdio.h>
#include <assert.h>

// general idea: we should assert any function requirements as
//      long as it's possible

int main(){
    
    // if assert(0) -> error
    // else -> nothing happens
    
    
    assert(1 + 1 == 2);
    assert(1);
    assert(12);
    assert(1 + 1 == 3);
    
    
    return 0;
}
