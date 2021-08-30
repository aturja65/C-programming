#include<stdio.h>

int main()
{
    int i,j,n;
    printf("Enter row number: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        if(i==(n+1)/2)
        {
            for(j=1;j<=n;j++)
            {
                printf("H");
            }
        }
        else
        {
            for(j=1;j<=n;j++)
            {
                if(j==1 || j==n)
                {
                    printf("H");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
