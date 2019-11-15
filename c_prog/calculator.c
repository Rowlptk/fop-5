#include<stdio.h>

void main()
{
    float n1,n2;
    char ch;
    printf("Enter Two numbers : ");
    scanf("%f%f",&n1,&n2);
    printf("Choose any One operation: + , - , * , /");
    scanf(" %c",&ch);
    switch(ch)
    {
    case '+':
        printf("%.2f + %.2f = %.2f",n1,n2,(n1+n2));
        break;
    case '-':
        printf("%.2f - %.2f = %.2f",n1,n2,(n1-n2));
        break;
    case '*':
        printf("%.2f * %.2f = %.2f",n1,n2,(n1*n2));
        break;
    case '/':
        printf("%.2f / %.2f = %.2f",n1,n2,(n1/n2));
        break;
    default:
        printf("Oops! you got a wrong symbol ");
    }
}




