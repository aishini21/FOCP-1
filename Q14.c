#include <stdio.h>
int isPrime(int num) 
{
    int i;
    if(num < 2)
        return 0;   
    for(i = 2; i <= num/2; i++)
      {
        if(num % i == 0)
            return 0;  
    }
    return 1;   
}
int main() 
{
    int arr[50], n, i, count = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
      {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
      {
        if(isPrime(arr[i]))
        {
            count++;
        }
    }
    printf("\nTotal Prime Numbers = %d\n", count);
    return 0;
}
