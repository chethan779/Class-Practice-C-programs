#include <stdio.h>

int main() {
    int N, i, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &N);

    // Numbers less than 2 are not prime
    if (N < 2) {
        isPrime = 0;
    } else {
        // Check divisibility from 2 to N/2
        for (i = 2; i <= N / 2; i++) {
            if (N % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a Prime Number.\n", N);
    else
        printf("%d is Not a Prime Number.\n", N);

    return 0;
}