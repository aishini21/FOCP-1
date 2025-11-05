#include <stdio.h>
int subtract(int a, int b)
{
    b = b + 1;  
    while (b != 0) 
    {
        int carry = a & b; 
        a = a ^ b;           
        b = carry << 1;     
    }

    return a;
}

int main()
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("Result ( %d - %d ) = %d\n", num1, num2, subtract(num1, num2));
    return 0;
}
