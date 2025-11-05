#include <stdio.h>
int main() 
{
    int arr[50], n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
      {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) 
    {
        if(i == 0 && arr[i] >= arr[i+1]) 
        {
            printf("Peak element is %d at position %d\n", arr[i], i+1);
            break;
        }
        else if(i == n-1 && arr[i] >= arr[i-1])
        {
            printf("Peak element is %d at position %d\n", arr[i], i+1);
            break;
        }
        else if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1])
        {
            printf("Peak element is %d at position %d\n", arr[i], i+1);
            break;
        }
    }
    return 0;
}
