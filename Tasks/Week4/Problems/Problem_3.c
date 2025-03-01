/*
write a c program that Check If The Number Is Palindrome Number
1121---> NOT Palindrome Number
1221 ---> Palindrome Number
*/
#include <stdio.h>

int main() {
    unsigned int number, original;
    printf("enter number : ");
    scanf("%d", &number);
    original = number;
    int reversed = 0;
    while (number > 0) {
        int digit = number % 10;
        reversed = reversed * 10 +digit;
        number /= 10;
  }
    if (reversed == original){
        printf("This is a Palindrome number!\n");
    }else{
        printf("This is not a Palindrome number.\n");
    }
    return 0;
}