/*
Write a C program to read a password in form of ***** until it is valid. For wrong password print
"Incorrect password" and for correct password print, "Correct password" and quit the
program. The correct password is 1234. 
*/
#include <stdio.h>
#include <math.h>

int main() {
    int password;
    printf("Please input your password : ");
    do{
        scanf("%d",&password);
        
        (password != 1234) ? printf("Worong password!, Try again : ") : printf("Correct password.");
    }while(password!=1234);
    return 0;
}