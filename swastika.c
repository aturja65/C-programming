#include<stdio.h>

int main()
{
    int a[100][100],i,j,n,sum=0;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    printf("Enter the matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==(n-1)/2 || j==(n-1)/2)
            {
                sum+=a[i][j];
            }
            else if((i<(n-1/2)&&j==(n-1)) || (i==0 && j<(n-1)/2))
            {
                sum+=a[i][j];
            }
             if((i>(n-1/2)&&j==0) || (i==(n-1) && j>(n-1)/2))
            {
                sum+=a[i][j];
            }
        }
    }
    printf("The sum is: %d\n", sum);
    return 0;
}
