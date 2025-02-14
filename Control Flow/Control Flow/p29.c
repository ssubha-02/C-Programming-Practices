//C Program to Display Armstrong Numbers Between 1 to 1000
#include <stdio.h>
#include <math.h>
int main() {
    int num, originalNum, remainder, result, n;
    printf("Armstrong numbers between 1 and 1000 are:\n");
    for (num = 1; num <= 1000; num++) {
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