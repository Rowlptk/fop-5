// 5 item input , same output using array
// odd inputs lai matra output garne
#include<stdio.h>
void main()
{
    int x[6],i;
    printf("Enter 6 numbers : \n");
    for(i=0;i<=5;i++)
    {
        printf("x[%d] = ",i);
        scanf("%d",&x[i]);
    }
    printf("\nThe stored value are : \n");
    for(i=0;i<=5;i++)
    {
        printf("x[%d] = %d\n",i,x[i]);
    }
    printf("\nThe Odd numbers are : \n");
    for(i=0;i<=5;i++)
    {
        if(x[i]%2 != 0)
        {
            printf("x[%d] = %d\n",i,x[i]);
        }
    }
    printf("\nThe Even numbers are : \n");
    for(i=0;i<=5;i++)
    {
        if(x[i]%2 == 0)
        {
            printf("x[%d] = %d\n",i,x[i]);
        }
    }
    // prime number list

}
