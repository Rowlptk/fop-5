#include<stdio.h>

void main()
{
    int y,m,d;
    printf("Enter any Date [yyyy-mm-dd] : ");
    scanf("%d-%d-%d",&y,&m,&d);
    if(y>=1800 && y<=2200)
    {
        if(m>=1 && m<=12)
        {
            if(d>=1 && d<=30)
            {
                printf("Date is valid.")
            }
            else
            {
                printf("Year and month is valid but day is invalid");
            }
        }
        else
        {
            printf("Year is valid But month is invalid");
        }
    }
    else
    {
        printf("Year is invalid");
    }

}

if.. else if..else /ladder
jan ==31
feb ==> 28/29(leap year)
mar = 31
apr =30
may = 31
jun = 30
july=31
aug =31
sep =30
oct = 31
nov = 30
dec = 31

one day ==> 1990-12-30
            1990-11-30





