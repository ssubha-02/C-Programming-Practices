//C Program to Calculate Sum of Natural Numbers
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("The sum of natural numbers up to %d is %d\n", n, sum);

    return 0;
}