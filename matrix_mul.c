#include<stdio.h>

int main()
{
    int a[100][100],b[100][100],result[100][100],i,j,k,arow,acol,brow,bcol,sum=0;
    printf("Enter the row and column number of first matrix: ");
    scanf("%d %d", &arow, &acol);
    printf("Enter the first matrix:\n");
    for(i=0;i<arow;i++)
    {
        for(j=0;j<acol;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the row and column number of second matrix: ");
    scanf("%d %d", &brow, &bcol);
    if(acol!=brow)
    {
        printf("Matrix multiplication is not possible\n");
    }
    else
    {
        printf("Enter the second matrix:\n");
        for(i=0;i<brow;i++)
        {
            for(j=0;j<bcol;j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        for(i=0;i<arow;i++)
        {
            for(j=0;j<bcol;j++)
            {
                for(k=0;k<brow;k++)
                {
                    sum+=(a[i][k]*b[k][j]);
                }
                result[i][j]=sum;
                sum=0;
            }
        }
        printf("The resultant matrix is:\n");
        for(i=0;i<arow;i++)
        {
            for(j=0;j<bcol;j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
