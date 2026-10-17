#include <stdio.h>

int main()
{
    float a, b;
    char op;

    printf("Enter two numbers and operator: ");
    scanf("%f %f %c", &a, &b, &op);

    switch (op)
    {
        case '+':
            printf("Result = %.2f", a + b);
            break;

        case '-':
            printf("Result = %.2f", a - b);
            break;

        case '*':
            printf("Result = %.2f", a * b);
            break;

        case '/':
            if (b == 0)
            {
                printf("Cannot divide by zero");
            }
            else
            {
                printf("Result = %.2f", a / b);
            }
            break;

        case '%':
            if ((int)b == 0)
            {
                printf("Cannot divide by zero");
            }
            else
            {
                printf("Remainder = %d", (int)a % (int)b);
            }
            break;

        default:
            printf("Invalid Operator");
    }

    return 0;
}