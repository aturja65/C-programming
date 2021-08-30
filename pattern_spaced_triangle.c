#include<stdio.h>

int main()
{
    int i,j,k,space,n;
    printf("Enter triangle number: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            for(k=1;k<=j;k++)
            {
                printf("*");
            }
            printf("\n");
            for(space=1;space<=(n*i)-n;space++)
            {
                printf(" ");
            }
        }
        for(space=1;space<=n;space++)
        {
            printf(" ");
        }
    }
    return 0;
}
