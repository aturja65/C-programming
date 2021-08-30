#include<stdio.h>

int main()
{
    int a[100][100],i,j,k,l,n,row,col;
    printf("Enter the row and col number: ");
    scanf("%d %d", &row, &col);
    printf("Enter the matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(a[i][j]==-1)
            {
                continue;
            }
            else
            {
                for(k=0;k<row;k++)
                {
                   for(l=0;l<col;l++)
                   {
                       if(i==k && j==l)
                       {
                           continue;
                       }
                       else if(a[i][j]==a[k][l])
                       {
                           a[k][l]=-1;
                       }
                   }
                }
            }
        }
    }
    printf("The resultant matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
