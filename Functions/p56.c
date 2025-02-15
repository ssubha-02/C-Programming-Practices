//C Program to Find the Sum of Natural Numbers using Recursion
#include <stdio.h>
int sumOfNaturalNumbers(int n) {
    if (n == 1)
        return 1;
    return n + sumOfNaturalNumbers(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of natural numbers up to %d is: %d\n", num, sumOfNaturalNumbers(num));
    return 0;
}
