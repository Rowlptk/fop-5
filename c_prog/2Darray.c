// create 3 x 3 matrix ==> display
#include<stdio.h>
void main()
{
    int x[3][3],y[3][3],sum[3][3],i,j;
    printf("Fill first 3 by 3 matrix: \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("x[%d][%d] = ",i,j);
            scanf("%d",&x[i][j]);
        }
    }
    printf("\nFill second 3 by 3 matrix: \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("y[%d][%d] = ",i,j);
            scanf("%d",&y[i][j]);
        }
    }
    // multplication of 2by2 matrix
    printf("\nThe Sum matrix is : \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            sum[i][j] = x[i][j] + y[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }


// string, pointer, string function ==> string.h
// functions ==> Banking Transactions


}
