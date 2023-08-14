#include <stdio.h>

int main() {
    char operator; // Stores the operator (+, -, *, /)
    double num1, num2; // Stores the two numbers
    double result; // Stores the result of the operation

    // Prompt the user for an operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to consume any newline characters

    // Prompt the user for two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform the appropriate operation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Cannot divide by zero.\n");
                return 1; // Exit the program with an error code
            }
            break;
        default:
            printf("Invalid operator.\n");
            return 1; // Exit the program with an error code
    }

    // Display the result
    printf("Result: %.2lf\n", result);

    return 0; // Exit the program successfully
}
