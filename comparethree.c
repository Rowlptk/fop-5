#include<stdio.h>

void main()
{
    int n1, n2, n3;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&n1,&n2,&n3);
    (n1>n2 && n1>n3)?printf("n1 is greater"):
        ((n2>n3)?printf("n2 is greater"):printf("n3 is greater"));

}


1. assignment ==> area of circle ==>  diameter ==> area
2. swap two variables ==>  a =2 , b=3 ==> after swapping ==> a =3 , b=2;
3. ternary operator ==>  even ra odd patta laune.
4. let say a = b*c*d;
        z = a*c+a*b+a*d;

        evaluate z;



/*
n1 ==> n2,n3  ==> T ==> n1 thulo

F  ==> n2  ,  n3  => n2>n3  => T ==> n2 thulo
                                F ==> n3 thulo
*/
