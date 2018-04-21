#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void aos_function(char *aos[], int num_of_strings);

void aos_function2(char **aos, int num_of_strings);



int main(void) {
    // this is an array of 3 strings, each has a size of 20
    char aos[3][20] = {"str1: hello", "str2: world", "str3: apple"};
}



