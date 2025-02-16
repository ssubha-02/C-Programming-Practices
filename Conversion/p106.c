// C Program For Float to String Conversion
#include <stdio.h>

void floatToString(float num, char str[]) {
    sprintf(str, "%.2f", num); 
}

int main() {
    float number;
    char str[50];

    printf("Enter a float number: ");
    scanf("%f", &number);

    floatToString(number, str);

    printf("Float as string: %s\n", str);

    return 0;
}