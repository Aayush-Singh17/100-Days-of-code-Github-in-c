#include <stdio.h>

int main()
{
    float num1, num2;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("\nSum = %.2f", num1 + num2);
    printf("\nDifference = %.2f", num1 - num2);
    printf("\nProduct = %.2f", num1 * num2);

    // Carefully handle division by zero
    if (num2 == 0)
    {
        printf("\nDivision is not possible because the second number is zero.");
    }
    else
    {
        printf("\nQuotient = %.2f", num1 / num2);
    }

    return 0;
}