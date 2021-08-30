#include<stdio.h>

int main()
{
    int i,j,n,a[100],temp;
    double median;
    printf("Enter how many elements you want to store in Array: ");
    scanf("%d", &n);
    printf("Enter the elements of Array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    if(n%2!=0)
    {
        printf("%d\n", a[n/2]);
    }
    else
    {
        median=(a[(n-1)/2]+a[n/2])/2.00;
        printf("%.1lf\n", median);
    }
    return 0;
}
