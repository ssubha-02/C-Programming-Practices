//C Program to Find G.C.D Using Recursion
#include <stdio.h>
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("G.C.D of %d and %d is: %d\n", num1, num2, gcd(num1, num2));
    return 0;
}