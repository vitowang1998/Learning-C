#include <stdio.h>

int main(void)
{
    //     \n -> new line
    printf("Nancy Mulligan is a beautiful song.\n");

    //     \t -> insert a tab
    printf("Nancy Mulligan \tis a beautiful song.\n");
    
    //     \a -> alert
    printf("Nancy Mulligan is a beautiful song.\a\n");

    //     \" -> insert a special character "
    //     also works for ', \, and ?
    printf("\"Nancy Mulligan\" is a beautiful song.\n");

    //     \v -> insert a verticle tab
    printf("Nancy Mulligan \vis a beautiful song.\n");
    
    //     \b -> moves the cursor back
    printf("Nancy Mulligan \bis a beautiful song.\n");
    
    //     \  -> the null type

    return 0;
}
