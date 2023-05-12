#include<stdio.h>
int main()
{
    int i,j,k, a[5][5], b[5][5],multiplication[5][5];// make a program to 2-D Matrix Multiplication using array and define  to rows and cols
    int rows1, cols1, rows2, cols2;
    printf("Matrix Multiplication ");
    scanf("%d %d", &rows1, &cols1);

    printf("---------------Matrix: 1--------------- \n");
    for(i=0;i<rows1;i++)//use the for loop in this program//
    {
        for(j=0;j<cols1;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix Multiplication");
    scanf("%d %d", &rows2, &cols2);
    if(cols1 != rows2)
    {
        printf("Matrices is can not be multiplied.");
        return 0;
    }
       printf("---------------Matrix: 2--------------- \n");
    for(i=0;i<rows2;i++)
    {
        for(j=0;j<cols2;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for(i=0;i<rows1;i++)
    {
        for(j=0;j<cols2;j++)
        {
            multiplication[i][j] = 0;
        }
    }
    for(i =0;i<rows1;i++)
    {
        for(j=0;j<cols2;j++)
        {
            for(k = 0; k < rows2; k++)
            {
                multiplication[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("---------------Result: Multiplication Matrix--------------- \n");
    for(i=0;i<rows1;i++)
    {
        for(j=0;j<cols2;j++)
        {
            printf("%d ", multiplication[i][j]);
        }
        printf("\n");
    }
      return 0;
}