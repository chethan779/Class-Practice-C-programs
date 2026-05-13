#include <stdio.h>
#include <stdlib.h>

int main() {
    int *readings;
    int i, sum = 0;
    float average;

    readings = (int *)malloc(3 * sizeof(int));

    if (readings == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter 3 sensor readings:\n");
    for (i = 0; i < 3; i++) {
        scanf("%d", &readings[i]);
    }

    readings = (int *)realloc(readings, 5 * sizeof(int));

    if (readings == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    printf("Enter 2 more sensor readings:\n");
    for (i = 3; i < 5; i++) {
        scanf("%d", &readings[i]);
    }

    // Display all readings
    printf("\nAll 5 Sensor Readings:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", readings[i]);
        sum += readings[i];
    }

    average = sum / 5.0;

    printf("\nAverage = %.2f\n", average);

    free(readings);

    return 0;
}