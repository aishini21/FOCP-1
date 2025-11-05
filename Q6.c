#include <stdio.h>
int main() 
{
    int choice, decimal, i;
    long long binary;
    printf("Number System Conversion\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    if (choice == 1) {
        int remainder, base = 1;
        int decimalValue = 0;
        printf("Enter a Binary Number: ");
        scanf("%lld", &binary);
        while (binary > 0) {
            remainder = binary % 10;
            decimalValue = decimalValue + (remainder * base);
            base = base * 2;
            binary = binary / 10;
        }
        printf("Decimal Value = %d\n", decimalValue);
    }
    else if (choice == 2) {
        int remainder;
        long long binaryValue = 0;
        int base = 1;
        printf("Enter a Decimal Number: ");
        scanf("%d", &decimal);
        while (decimal > 0) {
            remainder = decimal % 2;
            binaryValue = binaryValue + remainder * base;
            base = base * 10;
            decimal = decimal / 2;
        }
        printf("Binary Value = %lld\n", binaryValue);
    }
    else {
        printf("Invalid Choice!\n");
    }
    return 0;
}
