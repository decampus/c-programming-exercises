#include <stdio.h>
#include <math.h>

int main() {
    int radius;
    float circle_perimeter, circle_area;

    // Assign a value to the radius.
    radius = 6;

    // Calculating the perimeter of the circle.
    circle_perimeter = 2 * M_PI * radius;

    // Calculating the area of the circle.
    circle_area = M_PI * radius * radius;

    // Print the perimeter of the circle.
    printf("Perimeter of the Circle: %f inches\n", circle_perimeter);
    // Print the area of the circle.
    printf("Area of the Circle: %f square inches\n", circle_area);

    
    return 0;
}