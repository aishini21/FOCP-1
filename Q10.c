#include <stdio.h>
int main()
{
    int arr[50], n, i, count = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    printf("Enter the marks of students:\n");
    for(i = 0; i < n; i++)
      {
        scanf("%d", &arr[i]);
    }
    printf("Students who scored 99 are at positions: ");
    for(i = 0; i < n; i++)
      {
        if(arr[i] == 99) 
        {
            printf("%d ", i + 1);  
            count++;
        }
    }
    if(count == 0)
    {
        printf("\nNo student scored 99.\n");
    }
    else 
    {
        printf("\nTotal students who scored 99 = %d\n", count);
    }
    return 0;
}
