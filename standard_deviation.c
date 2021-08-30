#include<stdio.h>

int main()
{
    int i,n,a[100];
    double sum1=0.00,sum2=0.00,result;
    printf("Enter how many elements you want to store in Array: ");
    scanf("%d", &n);
    printf("Enter the elements of Array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        sum1+=a[i]/(double)n;
    }
    for(i=0;i<n;i++)
    {
        sum2+=(a[i]-sum1)*(a[i]-sum1);
    }
    result=sqrt(sum2/(double)(n-1));
    printf("Standard deviation is: %.3lf\n", result);
    return 0;
}
