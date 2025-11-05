#include <stdio.h>
int main() 
{
    int arr[50], n, i, pos, element;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
      {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position where to insert (1 to %d): ", n+1);
    scanf("%d", &pos);
    for(i = n; i >= pos; i--) 
    {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = element;
    n++; 
    printf("\nArray after insertion:\n");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
