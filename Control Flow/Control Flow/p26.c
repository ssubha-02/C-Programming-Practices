//C Program to Print Fibonacci Series
#include <stdio.h>
int main() {
    int n, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) {
        if (i == 1)
            printf("%d ", first);
        else if (i == 2)
            printf("%d ", second);
        else {
            next = first + second;
            first = second;
            second = next;
            printf("%d ", next);
        }
    }

    return 0;
}