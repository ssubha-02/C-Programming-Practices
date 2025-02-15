//C Program to Check Whether a Number can be Express as Sum of Two Prime Numbers
#include <stdio.h>
int isPrime(int n) {
    int i;
    if (n <= 1) return 0;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int checkSumOfPrimes(int num) {
    for (int i = 2; i <= num / 2; i++) {
        if (isPrime(i) && isPrime(num - i)) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (checkSumOfPrimes(num)) {
        printf("Yes, the number can be expressed as the sum of two prime numbers.\n");
    } else {
        printf("No, the number cannot be expressed as the sum of two prime numbers.\n");
    }

    return 0;
}
