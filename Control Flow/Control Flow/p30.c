//C Program to Display Armstrong Number Between Two Intervals 
#include <stdio.h>
#include <math.h>
int main() {
    int start, end, num, originalNum, remainder, result, n;
    printf("Enter the interval (start and end): ");
    scanf("%d %d", &start, &end);

    for (num = start; num <= end; num++) {
        originalNum = num;
        n = 0;
        result = 0;

        while (originalNum != 0) {
            originalNum /= 10;
            n++;
        }

        originalNum = num;

        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }

        if (result == num)
            printf("%d ", num);
    }

    return 0;
}