#include<stdio.h>

int main()
{
    int i,n,m,a[100],b[100],temp;
    printf("Enter how many elements you want to store in Array A: ");
    scanf("%d", &n);
    printf("Enter the elements of Array A: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter how many elements you want to store in Array B: ");
    scanf("%d", &m);
    printf("Enter the elements of Array B: ");
    for(i=0;i<m;i++)
    {
        scanf("%d", &b[i]);
    }
    if(n>m)
    {
        for(i=0;i<n;i++)
        {
            temp=b[i];
            b[i]=a[i];
            a[i]=temp;
        }
        printf("Array A: ");
        for(i=0;i<m;i++)
        {
            printf("%d ", a[i]);
        }
        printf("\nArray B: ");
        for(i=0;i<n;i++)
        {
            printf("%d ", b[i]);
        }
    }
    else
    {
        for(i=0;i<m;i++)
        {
            temp=b[i];
            b[i]=a[i];
            a[i]=temp;
        }
        printf("Array A: ");
        for(i=0;i<n;i++)
        {
            printf("%d ", a[i]);
        }
        printf("\nArray B: ");
        for(i=0;i<m;i++)
        {
            printf("%d ", b[i]);
        }
    }
    printf("\n");
    return 0;
}
