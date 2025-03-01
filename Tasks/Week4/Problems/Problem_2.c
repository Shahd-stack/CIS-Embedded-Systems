/*
write a c program that Check If The Number Is Strong Number
Test data:
enter number to check if it strong or not
145=1!+4!+5! ===> so 145 is strong number 
*/
#include <stdio.h>
#include <math.h>

int main() {
    unsigned int number, original;
    printf("enter number to check if it strong or not: ");
    scanf("%d", &number);
    original = number;
    int sum = 0;
    while (number != 0) {
        int digit = number % 10;
        sum += tgamma(digit + 1);
        number /= 10;
  }
    if (sum == original){
        printf("This is a strong number!\n");
    }else{
        printf("This is not a strong number.\n");
    }
    return 0;
}
