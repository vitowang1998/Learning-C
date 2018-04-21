#include <assert.h>

// strncmp, an alternative to strcmp, stops when space of string runs out, hence is safer.

// my_strcmp(s1[], s2[]) returns 0 if str1[] str2[] are identical, 1 if str1 precedes
//      str2, -1 if str1 follows str2
// requires: str1[], str2[] are valid C style strings
// time: O(n) where n = min(strlen(str1), strlen(str2))
int my_strcmp(const char str1[], const char str2[]) {
    int i = 0;
    while (str1[i] == str2[i]) {
        if (str1[i] == '\0' && str2[i] == '\0') {
            return 0;
        }
        i++;
    }
    if (str1[i] > str2[i]) {
        return 1;
    }
    return -1;
}
