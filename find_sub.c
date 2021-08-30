#include<stdio.h>

int main()
{

    char str1[100],str2[100];
    int num=0,i,j,temp,len;
    printf("Enter the string: ");
    gets(str1);
    printf("Enter sub-string: ");
    gets(str2);
    for(len=0;str2[len]!='\0';len++);
    for(i=0;str1[i]!='\0';i++)
    {
        temp=i;
        for(j=0;j<len;j++)
        {
            if(str1[i]==str2[j])
            {
                num++;
                i++;
            }
            else
            {
                i=temp;
                break;
            }
        }
    }
    if(num==len)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
