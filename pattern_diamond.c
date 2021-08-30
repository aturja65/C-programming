#include<stdio.h>

int main()
{
    int n,i=1,j;
    printf("Enter row number: ");
    scanf("%d", &n);
    while(i<=(n+1)/2)
    {
        j=(n+1)/2;
        while(j>i)
        {
            printf(" ");
            j--;
        }
        j=1;
        while(j<=2*i-1)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    i=(n-1)/2;
    while(i>=1)
    {
        j=(n-1)/2;
        while(j>=i)
        {
            printf(" ");
            j--;
        }
        j=2*i-1;
        while(j>=1)
        {
            printf("*");
            j--;
        }
        printf("\n");
        i--;
    }
    return 0;
}
