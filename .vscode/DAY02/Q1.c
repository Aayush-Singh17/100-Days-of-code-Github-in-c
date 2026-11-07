#include <stdio.h>

int main()
{
    float length, breadth, area, perimeter;

    // Input length and breadth
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculate area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Display results
    printf("\nArea of rectangle = %.2f", area);
    printf("\nPerimeter of rectangle = %.2f", perimeter);

    return 0;
}