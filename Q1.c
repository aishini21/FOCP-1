#include <stdio.h>
#include <math.h>
int main() 
{
    int num, oNum, rem, result = 0, digi = 0;
     printf("Enter any number: ");
     scanf("%d", &num);
     oNum = num;
    while (oNum!= 0) 
{
        oNum /= 10;
        digi++;
}
    oNum = num;
    while (oNum != 0)
{
        rem = oNum % 10;
        result += pow(rem, digi);
        oNum /= 10;
}
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is no not an Armstrong number.\n", num);
    return 0;
}
