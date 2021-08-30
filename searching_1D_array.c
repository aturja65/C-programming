#include<stdio.h>

int main()
{
    int a[100],i,n,number,num=0;
    printf("Enter how many elements you want to store: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number you want to search: ");
    scanf("%d", &number);
    for(i=0;i<n;i++)
    {
        if(number==a[i])
        {
            printf("Number found at index: %d\n", i);
            num=1;
        }
    }
    if(num==0)
    {
        printf("Index not found\n");
    }
    return 0;
}
