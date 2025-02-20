/*
C program that swaps the values of two variables without using a third variable:
Perform the following tasks:
->Prompt the user to enter two integer numbers, a and b.
->Display the original values of a and b.
->Swap the values of a and b without using a third variable.
->Display the values of a and b after swapping.
*/

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
