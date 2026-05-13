#include <stdio.h>

int main() {
    int bins[3][3] = {
        {101, 102, 103},
        {201, 202, 203},
        {301, 302, 303}
    };

    // Pointer to an array of 3 integers
    int (*ptr)[3];

    ptr = bins;

    printf("Bin Numbers in Warehouse:\n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", *(*(ptr + i) + j));
        }
        printf("\n");
    }

    return 0;
}