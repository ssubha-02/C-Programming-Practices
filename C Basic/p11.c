// C Program to Add Two Complex Numbers 
#include <stdio.h>

int main() {
    float real1, imag1, real2, imag2, sumReal, sumImag;
    printf("Enter real and imaginary parts of first complex number: ");
    scanf("%f %f", &real1, &imag1);
    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%f %f", &real2, &imag2);

    sumReal = real1 + real2;
    sumImag = imag1 + imag2;

    printf("Sum = %.2f + %.2fi\n", sumReal, sumImag);
    return 0;
}
