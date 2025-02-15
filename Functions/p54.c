//C Program to Display Prime Numbers Between Two Intervals Using Functions
#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Not a prime number
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

void displayPrimes(int start, int end) {
    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    displayPrimes(start, end);

    return 0;
}
