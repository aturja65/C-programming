#include<stdio.h>

int main()
{
    int i,j,n;
    printf("Enter row number: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i%2!=0 && j%2!=0)
            {
                printf("1");
            }
            else if(i%2!=0 && j%2==0)
            {
                printf("0");
            }
            else if(i%2==0 && j%2!=0)
            {
                printf("0");
            }
            else if(i%2==0 && j%2==0)
            {
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}
