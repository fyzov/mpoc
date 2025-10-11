#include <stdio.h>
#include <stdlib.h>

#define HISTORY_FILE "history.txt"

double calculate(double a, double b, const char operator) {
    switch (operator) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': if (b != 0) return a / b;
        default: return 0;
    }
}

int main() {
    double num1, num2, result;
    char operator;

    FILE* file = fopen(HISTORY_FILE, "a");

    while (1) {
        printf("Enter: ");
        scanf("%lf %c %lf", &num1, &operator, &num2);

        result = calculate(num1, num2, operator);

        printf("Result: %.2f\n", result);
        fprintf(file, "%lf %с %lf = %.2f\n", num1, operator, num2, result);
    }

    fclose(file);
}
