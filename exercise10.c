#include <stdio.h>

int main() {
    int a, b, product;

    printf("Input the first integer: ");
    scanf("%d", &a);
    printf("Input the second intege: ");
    scanf("%d", &b);

    product = a * b;

    printf("Product of the above two integers = %d\n", product);
    
    return 0;
}