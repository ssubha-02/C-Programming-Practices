//.C Program to Find All Factors of a Natural Number
#include <stdio.h>
int main() {
    int num, i;
    printf("Enter a natural number: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}