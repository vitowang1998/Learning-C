#include <stdio.h>
#include <assert.h>

void print_2d_array(int array[][3], int num_of_rows, int num_of_columns) {
    for (int i = 0; i < num_of_rows; i++) {
        printf("No. %d row of array ", i);
        for (int j = 0; j < num_of_columns; j++) {
            printf("%d, ", array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main(void) {
    
    // Multi-dimensional arrays
    
    // 2d arrays
    // initialize
    int two_d_arrays[3][3] = {{1, 2, 3}, {11, 12, 13}, {21, 22, 23}};
    
    // we can also initialzie in this way
    int two_d_arrays2[3][3] = {1, 2, 3, 11, 12, 13, 21, 22, 23};
    
    // 3d arrays
    // When we initialize a multi-dimensional array
    int three_d_arrays[3][3][3];

    
    // Actually, multi-dimentional arrays are stored linearly in the program's memory
    
    
    print_2d_array(two_d_arrays, 3, 3);
    print_2d_array(two_d_arrays2, 3, 3);
    
}
