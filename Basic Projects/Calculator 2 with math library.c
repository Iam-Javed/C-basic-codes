#include <stdio.h>
#include <math.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /, %% or ^): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

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
                return 1;
            }
            break;
        case '%':
            if (num2 != 0) {
                result = fmod(num1, num2);
            } else {
                printf("Cannot take modulus by zero.\n");
                return 1;
            }
            break;
        case '^':
            result = pow(num1, num2);
            break;
        default:
            printf("Invalid operator.\n");
            return 1;
    }

    printf("Result: %.2lf\n", result);

    return 0;
}
