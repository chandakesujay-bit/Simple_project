#include <stdio.h>

// Function to divide two numbers
float div(float num1, float num2) {
    if (num2 == 0) {
        printf("Error! Division by zero.\n");
        return 0;
    }
    return num1 / num2;
}


