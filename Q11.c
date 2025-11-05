#include <stdio.h>
int main() 
{
    int scores[50], even_array[50], odd_array[50];
    int n, i, e = 0, o = 0;
    printf("Enter number of scores: ");
    scanf("%d", &n);
    printf("Enter the scores:\n");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &scores[i]);
    }
    for(i = 0; i < n; i++) 
    {
        if(scores[i] % 2 == 0)
        {
            even_array[e] = scores[i];
            e++;
        }
        else
        {
            odd_array[o] = scores[i];
            o++;
        }
    }
    printf("\nEven Scores: ");
    for(i = 0; i < e; i++)
      {
        printf("%d ", even_array[i]);
    }
    printf("\nOdd Scores: ");
    for(i = 0; i < o; i++)
      {
        printf("%d ", odd_array[i]);
    }
    printf("\n");
    return 0;
}
