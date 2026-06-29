#include <stdio.h>

int main() {

    float num1, num2, result;
    char op;

    printf("===== SIMPLE CALCULATOR =====\n");

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    if (op == '+') {

        result = num1 + num2;
        printf("Result = %.2f", result);

    } else if (op == '-') {

        result = num1 - num2;
        printf("Result = %.2f", result);

    } else if (op == '*') {

        result = num1 * num2;
        printf("Result = %.2f", result);

    } else if (op == '/') {

        if (num2 != 0) {
            result = num1 / num2;
            printf("Result = %.2f", result);
        } else {
            printf("Error! Cannot divide by zero.");
        }

    } else {

        printf("Invalid operator!");

    }

    return 0;
}
