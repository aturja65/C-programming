#include<stdio.h>

int main()
{
    int a[100],i,n,max,min,index1,index2;
    printf("Enter how many elements you want to store: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
      max=a[0];
      min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            index1=i;
        }
        if(a[i]<min)
        {
            min=a[i];
            index2=i;
        }
    }
    printf("Max=%d,Index=%d\nMin=%d,Index=%d\n",max,index1,min,index2);
    return 0;
}
