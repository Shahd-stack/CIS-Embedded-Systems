/*
Write a C program to reverse three-digit .
Example:

If the user enters 251 , the program should output 152 .
*/

#include <stdio.h>

int main() {
    int number;
    printf("Input a 3 digits number that is to be reversed :");
    scanf("%d", &number);

    int revNumber = 0;

    while (number) {

    revNumber = revNumber * 10 + number % 10;
    number /= 10;
    }

    printf("%d", revNumber);

    return 0;
}