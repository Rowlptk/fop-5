#include<stdio.h>
/*
****        *           ****    ****
****        **          -***    ***
****        ***         --**    **
****        ****        ---*    *
*/
void main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=2;j<=i;j++)
        {
            printf(" ");
        }
        for(j=4;j>=i;j--)
        {
            printf("*");
        }

        printf("\n");
    }
}
