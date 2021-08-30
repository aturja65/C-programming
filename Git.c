#include<stdio.h>

int checker(int n)
{
   int i;
   if(n<=1)
   {
      return 0;
   }
   else
   {
       for(i=2;i<n;i++)
       {
           if(n%i==0)
           {
              return 0;
           }
       }
       return i;
   }
}

int main()
{
   int n,i;
   printf("Enter a number: ");
   scanf("%d", &n);
   for(i=2;i<=n/2;i++)
   {
       if(n==checker(i)+checker(n-i))
       {
           printf("%d+%d\n", i, n-i);
       }
   }
   return 0;
}
