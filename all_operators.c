//Q1. WAP to implement operators in c ?
#include <stdio.h>
int main() {
    int a = 10, b = 5, c;
    int *ptr = &a;
  // Arithmetic Operators
    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n\n", a % b);
    // Relational Operators
    printf("Relational Operators:\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n\n", a <= b);
    // Logical Operators
    printf("Logical Operators:\n");
    printf("(a > 0 && b > 0): %d\n", (a > 0 && b > 0));
    printf("(a > 0 || b < 0): %d\n", (a > 0 || b < 0));
    printf("!(a == b): %d\n\n", !(a == b));
    // Bitwise Operators
    printf("Bitwise Operators:\n");
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n\n", a >> 1);
    // Assignment Operators
    printf("Assignment Operators:\n");
    c = a;
    c += b;
    printf("c += b: %d\n", c);
    c -= b;
    printf("c -= b: %d\n", c);
    c *= b;
    printf("c *= b: %d\n", c);
    c /= b;
    printf("c /= b: %d\n", c);
    c %= b;
    printf("c %%= b: %d\n\n", c);
    // Increment/Decrement Operators
    printf("Increment/Decrement Operators:\n");
    printf("a++ = %d\n", a++);
    printf("Now a = %d\n", a);
    printf("++a = %d\n", ++a);
    printf("a-- = %d\n", a--);
    printf("Now a = %d\n", a);
    printf("--a = %d\n\n", --a);
    // Conditional (Ternary) Operator
    printf("Conditional Operator:\n");
    int max = (a > b) ? a : b;
    printf("Max of a and b: %d\n\n", max);
    // sizeof Operator 
    printf("sizeof Operator:\n");
    printf("Size of int: %d bytes\n", sizeof(int));
    printf("Size of float: %d bytes\n", sizeof(float));
    printf("Size of char: %d bytes\n\n", sizeof(char));
    return 0;
     
    // Address Operators
    printf("Pointer Operators:\n");
    printf("Address of a: %d\n", &a); 
   
    return 0;
}
