//C Program to Display Prime Numbers Between Intervals
#include <stdio.h>
int main() {
    int start, end, num, i, isPrime;
    printf("Enter the interval (start and end): ");
    scanf("%d %d", &start, &end);

    for (num = start; num <= end; num++) {
        if (num <= 1) continue;
        isPrime = 1;
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", num);
    }

    return 0;
}
