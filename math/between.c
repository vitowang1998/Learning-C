#include <stdio.h>
#include <assert.h>
#include <stdbool.h>


bool between(int a, int low, int high, bool includeLimit) {
    if (includeLimit) {
        return ((a >= low) && (a <= high));
    } else {
        return ((a > low) && (a < high));
    }
}



int main(void) {
    assert(between(5, 1, 8, false));
    assert(between(5, 5, 8, true));
}

