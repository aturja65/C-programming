#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100],str2[100];
    int len1,len2,temp,i,j,k;
    printf("Input string: ");
    gets(str1);
    printf("Input substring: ");
    gets(str2);
    len1=strlen(str1);
    len2=strlen(str2);
    for(i=0;i<len1;i++)
    {
        temp=i;
        for(j=0;j<len2;j++)
        {
            if(str1[i]==str2[j])
            {
                for(k=i;k<len1;k++)
                {
                    str1[k]=str1[k+1];
                }
                len1--;
            }
            else
            {
                i=temp;
                break;
            }
        }
    }
    puts(str1);
    return 0;
} 
