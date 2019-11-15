#include<stdio.h>
void main()
{
    int n;
    printf("Enter any Number : ");
    scanf("%d",&n);
    if(n%2 == 0)
    {
        printf("Even Number. ");
    }
    else
    {
        printf("Odd Number. ");
    }
}

#include<stdio.h>
void main()
{
    int n;
    printf("Enter any Year : ");
    scanf("%d",&n);
    if(n%4 == 0)
    {
        printf("Leap year ");
    }
    else
    {
        printf("Not a leap year ");
    }
}
