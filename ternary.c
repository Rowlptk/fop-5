//compare two numbers using ternary operator

// if ur above 18 u r eligible to vote;

// compare three numbers  ==> num1,num2,num3;




#include<stdio.h>
void main()
{
    int age;
    printf("Enter your Age = ");
    scanf("%d",&age);
    (age>=18)?printf("You can Vote "):printf("You must be 18 to vote");
}

/*
#include<stdio.h>

void main()
{
  int num1, num2;
  printf("Dueta number halnus : ");
  scanf("%d%d",&num1,&num2);
  (num1>num2)?printf("%d id greater",num1):printf("%d is greater ",num2);
}
*/
