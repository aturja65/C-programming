#include<stdio.h>

int main()
{
    int n,i,num=0;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    if(n<1)
    {
        printf("Invalid input\n");
    }
    else
    {
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            num=1;
            break;
        }
    }
    if(n==1)
    {
        printf("1 is a rational number\n");
    }
    else if(num==0)
    {
        printf("Prime\n");
    }
    else if(num==1)
    {
        printf("Not prime\n");
    }
    }
    return 0;
}
