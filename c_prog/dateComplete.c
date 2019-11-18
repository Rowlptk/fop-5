#include<stdio.h>

void main()
{
    int y,m,d;
    printf("Enter a date [yyyy-mm-dd] : ");
    scanf("%d-%d-%d",&y,&m,&d);
    if(y>=1500 && y<=2200)
    {
        if(m>=1 && m<=12)
        {
            if((d>=1 && d<=31) && (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12))
            {
                printf("Date is valid!");
            }
            else if((d>=1 && d<=30) && (m==4 || m==6 || m==9 || m==11))
            {
                printf("Date is valid!");
            }
            else if((d>=1 && d<=28) && (m==2))
            {
                printf("Date is valid!");
            }
            else if((d>=1 && d<=29) && (m==2) && ((y%400 == 0)||((y%4==0)&&(y%100!=0))))
            {
                printf("Date is valid!");
            }
            else
            {
                printf("Day is invalid!");
            }
        }
        else
        {
            printf("Month is Invalid!");
        }
    }
    else
    {
        printf("Year is invalid!");
    }
}
