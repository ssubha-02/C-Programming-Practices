// C Program to Add Two Complex Numbers by Passing Structure to a Function

#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

Complex addComplex(Complex c1, Complex c2) {
    Complex sum;
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    return sum;
}

int main() {
    Complex num1, num2, result;

    printf("Enter real and imaginary parts of first complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);

    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%f %f", &num2.real, &num2.imag);

    result = addComplex(num1, num2);

    printf("\nSum = %.2f + %.2fi\n", result.real, result.imag);
    return 0;
}