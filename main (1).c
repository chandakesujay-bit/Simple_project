#include <stdio.h>

// Function declarations
float add(float, float);
float sub(float, float);
float mul(float, float);
float div(float, float);

int main() {
    float num1, num2;
    int choice;

    while (1) {
        printf("\n--- Simple Calculator ---\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting...\n");
            break;
        }

        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);

        switch (choice) {
            case 1:
                printf("Result: %.2f\n", add(num1, num2));
                break;
            case 2:
                printf("Result: %.2f\n", sub(num1, num2));
                break;
            case 3:
                printf("Result: %.2f\n", mul(num1, num2));
                break;
            case 4:
                printf("Result: %.2f\n", div(num1, num2));
                break;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}


