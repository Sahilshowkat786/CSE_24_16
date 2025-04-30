#include <stdio.h>

int main() {
    float a, b, div;

    printf("Enter first number = ");
    scanf("%f", &a);

    printf("Enter second number = ");
    scanf("%f", &b);

    if (b != 0) {
        div = a / b;
        printf("The division of two numbers is %f\n", div);
    } else {
        printf("Division is not defined");
    }

    return 0;
}
