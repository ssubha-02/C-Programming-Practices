//C Program to Check whether the input number is a Neon Number
#include <stdio.h>
int main() {
    int num, sum = 0, square, temp;
    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;
    temp = square;

    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }

    if (sum == num) {
        printf("%d is a Neon Number.\n", num);
    } else {
        printf("%d is not a Neon Number.\n", num);
    }

    return 0;
}