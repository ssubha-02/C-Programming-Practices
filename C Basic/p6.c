// C Program to Multiply two Floating-Point Numbers

#include <stdio.h>

int main() {
    float num1, num2, product;
    printf("Enter two floating-point numbers: ");
    scanf("%f %f", &num1, &num2);
    product = num1 * num2;
    printf("Product: %.2f\n", product);
    return 0;
}