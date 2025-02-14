//C program to  Sum of Fibonacci Numbers at Even Indexes up to N Terms
#include <stdio.h>
int main() {
    int n, i, a = 0, b = 1, sum = 0, temp;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sum += a;
        }
        temp = a + b;
        a = b;
        b = temp;
    }

    printf("Sum of Fibonacci numbers at even indexes: %d\n", sum);

    return 0;
}