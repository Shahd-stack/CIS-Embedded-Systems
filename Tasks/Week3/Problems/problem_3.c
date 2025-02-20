/*
unsigned char x = 1;
Using bitwise Operators:
• set bit number 7
• clear bit number 7
• toggle bit number 7
• Read the 7's bit from number and then print it
*/

#include <stdio.h>

int main() {
    unsigned char x = 1; 

    // Set bit 7 => Make it 1
    x = x | (1 << 7);  
    printf("After setting bit 7: %b\n", x);  // 1000 0001

    // Clear bit 7 => Make it 0
    x = x & ~(1 << 7);
    printf("After clearing bit 7: %b\n", x);  // 0000 0001

    // Toggle bit 7 => Flip 0 to 1 or 1 to 0
    x = x ^ (1 << 7);
    printf("After toggling bit 7: %b\n", x);  // 1000 0001

    // Read bit 7 => Extract value
    int bit7 = (x >> 7) & 1;
    printf("Bit 7 value: %b\n", bit7);  // 1

    return 0;
}