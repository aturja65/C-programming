#include<stdio.h>

int main()
{
    int i,j,space,n;
    printf("Enter row number: ");
    scanf("%d", &n);
    for(i=(n+1)/2;i>=1;i--)
    {
        for(space=(n+1)/2;space>i;space--)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            if(j==1 || j==2*i-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=2;i<=(n+1)/2;i++)
    {
        for(space=(n+1)/2;space>i;space--)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            if(j==1 || j==2*i-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
