#include<stdio.h>

int main()
{
    int a[100][100],i,j,n;
    printf("Enter the size of square matrix: ");
    scanf("%d", &n);
    printf("Enter the elements of square matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Major diagonal: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                printf("%d ", a[i][j]);
            }
        }
    }
    printf("\nMinor diagonal: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==(n-1)-i)
            {
                printf("%d ", a[i][j]);
            }
        }
    }
    printf("\n");
    return 0;
}
