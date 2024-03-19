#include <stdio.h>

int main() {
    int rectangle_width;
    int rectangle_height;
    int rectangle_perimeter;
    int rectangle_area;

    rectangle_width = 5;
    rectangle_height = 7;

    rectangle_perimeter = 2 * (rectangle_width + rectangle_height);
    rectangle_area = rectangle_width * rectangle_height;

    printf("Perimeter of the rectangle = %d inches\n", rectangle_perimeter);
    printf("Area of the rectangle = %d square inches\n", rectangle_area);
    
    return 0;
}