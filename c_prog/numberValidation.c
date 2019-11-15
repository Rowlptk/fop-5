/*output:
    Enter first number : -9
    please enter positive number only: -6
    please enter positive number only: 8

    Enter second number : -89
    please enter positive number only: -76
    please enter positive number only: 76

    the sum is : 76 + 8 = 82
*/
#include<stdio.h>
void main()
{
    int n1,n2;
    printf("Enter first number : ");
    scanf("%d",&n1);
    while(n1<0)
    {
        printf("Please enter positive number only : ");
        scanf("%d",&n1);
    }

    printf("Enter second number : ");
    scanf("%d",&n2);
    while(n2<0)
    {
        printf("Please enter positive number only : ");
        scanf("%d",&n2);
    }

    printf("%d + %d = %d",n1,n2,(n1+n2));
}



