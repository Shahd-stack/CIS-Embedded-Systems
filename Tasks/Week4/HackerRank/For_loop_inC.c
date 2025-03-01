#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    for (int n = a; n <= b; n++) {
        if (n >= 1 && n <= 9) { 
            char *words[] = {"one", "two", "three", "four", "five", 
                             "six", "seven", "eight", "nine"};
            printf("%s\n", words[n - 1]); 
        } 
        else {
            printf("%s\n", (n % 2 == 0) ? "even" : "odd");
        }
    }

    return 0;
}