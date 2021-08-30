#include<stdio.h>

int main()
{

    char str1[100],str2[100][100];
    int len,i,j=0,count=0;
    printf("Enter the string: ");
    gets(str1);
    for(len=0;str1[len]!='\0';len++);
    for(i=0;i<=len;i++)
    {
       if(str1[i]==' ' || str1[i]=='\0')
       {
           str2[count][j]='\0';
           count++;
           j=0;
       }
       else
       {
           str2[count][j]=str1[i];
           j++;
       }
    }
    for(i=0;i<count;i++)
    {
        puts(str2[i]);
    }
    return 0;
}
