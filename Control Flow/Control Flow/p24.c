//C Program to Make a Simple Calculator 
#include <stdio.h>
int main() {
    int num1, num2, choice;
    float result;

    while (1) {
        // Display the calculator menu
        printf("\nSimple Calculator\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting the calculator.\n");
            break; // Exit the loop if user chooses 5
        }

        // Get the numbers from the user
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %d + %d = %.2f\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %d - %d = %.2f\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %d * %d = %.2f\n", num1, num2, result);
                break;
            case 4:
                if (num2 != 0) {
                    result = (float)num1 / num2;
                    printf("Result: %d / %d = %.2f\n", num1, num2, result);
                } else {
                    printf("Error! Division by zero.\n");
                }
                break;
            default:
                printf("Invalid choice! Please select a valid operation.\n");
        }
    }

    return 0;
}
