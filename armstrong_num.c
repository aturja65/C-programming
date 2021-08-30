#include<stdio.h>

int main()
{
    int n,i,sum=0,temp,rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum+=(rem*rem*rem);
        n/=10;
    }
    if(sum==temp)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
