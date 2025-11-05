#include <stdio.h>
int main() 
{
    int arr[50], n, i, found = 0;
    printf("Enter number of scores: ");
    scanf("%d", &n);
    printf("Enter the scores:\n");
    for(i = 0; i < n; i++) 
{
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) 
{
        if(arr[i] == 99) 
{
            printf("First occurrence of 99 is at position %d.\n", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
{
        printf("Score 99 not found in the array.\n");
    }

    return 0;
}
