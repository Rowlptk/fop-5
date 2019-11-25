#include<stdio.h>

// login
// menu
// Balancy enquiry
// withdraw
// Deposit
// exit

int add(int n1, int n2); // parametrized function

void main()
{
    int x, y;
    printf("Enter x and y : ");
    scanf("%d%d",&x,&y);
    printf("The sum is %d  ",add(x,y));
}

int add(int n1, int n2)
{
    return(n1+n2);
}

