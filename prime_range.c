#include<stdio.h>

int main()
{
    int a,b,i,j,num;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for(i=a;i<=b;i++)
    {
        num=0;
        if(i<=1)
        {
            continue;
        }
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                num=1;
                break;
            }
        }
        if(num==0)
        {
            printf("%d,", i);
        }
    }
    printf("\n");
    return 0;
}
