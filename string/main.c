#include <stdio.h>

int main(void) {
    const char* str1 = "12415251643";
    printf("Str1 = %s\n", str1);
    char* str2 = NULL;
    str2 = str1;
    printf("Str2 = %s\n", str2);
}
