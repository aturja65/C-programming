#include<stdio.h>

int main()
{
    int i,j,k,n,a[100];
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
            if(a[i]==a[j])
            {
                for(k=j;k<n;k++)
                {
                    a[k]=a[k+1];
                }
                n--;
                j--;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
