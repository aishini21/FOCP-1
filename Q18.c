#include <stdio.h>
int main() 
{
    int arr[50], n, i, j;
    int found = 0; 
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("\nDuplicate elements are: ");
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < i; j++)
          {
            if(arr[i] == arr[j])
            {
                break; 
            }
        }
        if(i == j) 
        {
            for(j = i + 1; j < n; j++) 
            {
                if(arr[i] == arr[j])
                {
                    printf("%d ", arr[i]);
                    found = 1;
                    break;
                }
            }
        }
    }

    if(found == 0) 
    {
        printf("-1"); 
    }
    return 0;
}
