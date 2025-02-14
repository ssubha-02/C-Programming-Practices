// C Program to Find Compound Interest
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compoundInterest, amount;
    printf("Enter principal, rate, and time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    printf("Compound Interest: %.2f\n", compoundInterest);
    return 0;
}
