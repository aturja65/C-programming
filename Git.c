#include<stdio.h>

int checker(int n)
{
    if(n<=1)
    {
        return 0;
    }
    else
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
}
int main()
{
    int start,end,i;
    printf("Enter starting and ending number: ");
    scanf("%d %d", &start, &end);
    for(i=start;i<end;i++)
    {
        if(checker(i) && checker(i+2))
        {
            printf("(%d,%d)", i, i+2);
        }
    }
    return 0;
}
