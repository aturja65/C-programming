#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n>0)
    {
        for(i=2;n>1;i++)
        {
            while(n%i==0)
            {
                printf("%dx", i);
                n/=i;
            }
        }
        printf("\n");
    }
    return 0;
}

