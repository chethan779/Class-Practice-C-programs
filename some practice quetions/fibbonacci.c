#include <stdio.h>

int main() {
    int n, i;
    int first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        if (i <= 1) {
            next = i; // First two terms are 0 and 1
        } else {
            next = first + second; // Sum of previous two
            first = second;        // Update first for next iteration
            second = next;         // Update second for next iteration
        }
        printf("%d ", next);
    }

    return 0;
}
