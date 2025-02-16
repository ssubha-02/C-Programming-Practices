// C Program For Binary to Decimal Conversion
#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long binary) {
    int decimal = 0, base = 0, digit;

    while (binary > 0) {
        digit = binary % 10;
        decimal += digit * pow(2, base);
        binary /= 10;
        base++;
    }

    return decimal;
}

int main() {
    long long binary;
    
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    printf("Decimal equivalent: %d\n", binaryToDecimal(binary));

    return 0;
}