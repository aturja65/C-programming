#include<stdio.h>

int main()
{
    int i,j,space,n;
    printf("Enter row number: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        if(i==1 || i==n)
        {
            for(j=1;j<=n;j++)
            {
                printf("Z");
            }
        }
        else
        {
            for(space=n;space>i;space--)
            {
                printf(" ");
            }
            printf("Z");
        }
        printf("\n");
    }
    return 0;
}
