#include<stdio.h>

int main()
{
    int n,a,sum,rem=1,temp1,temp2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n, &a);
    temp1=n;
    temp2=a;
    while(rem>0)
    {
        rem=temp1%temp2;
        temp1=temp2;
        temp2=rem;
    }
    printf("GCD:%d\n", temp1);
    sum=(n*a)/temp1;
    printf("LCM:%d\n", sum);
    return 0;
}
