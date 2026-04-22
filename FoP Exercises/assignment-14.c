//Binary to decimal converter
#include <stdio.h>
#include <math.h>

int main() {
    long long binary;
    int decimal = 0, i = 0, remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    // Loop to process each digit
    while (binary != 0) {
        // Get the last digit
        remainder = binary % 10;
        
        // Remove the last digit from binary
        binary /= 10;
        
        // Multiply digit with power of 2 and add to decimal
        decimal += remainder * pow(2, i);
        
        // Increment the position (power)
        ++i;
    }

    printf("Decimal equivalent = %d\n", decimal);

    return 0;
}