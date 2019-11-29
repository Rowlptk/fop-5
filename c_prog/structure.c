#include<stdio.h>

struct bookStore
{
    char name[50];
    int pages;
    float price;
    char rack;
}b[50];

void main()
{
   int i,n,m;
   char bookName[50];
   printf("How many Books You want to Add : ");
   scanf("%d",&n);
   getchar();
   for(i=0;i<n;i++)
   {
        printf("Enter book %d name : ",(i+1));
        gets(b[i].name);
        printf("Enter book %d pages : ",(i+1));
        scanf("%d",&b[i].pages);
        printf("Enter book %d price : ",(i+1));
        scanf("%f",&b[i].price);
        printf("Enter book %d rack : ",(i+1));
        scanf(" %c",&b[i].rack);
        getchar();
        printf("\n\n");
   }
        m = n;
        printf("Enter Book name : ");
        gets(bookName);
        for(i=0;i<n;i++)
        {
            if((strcmp(bookName,b[i].name)) == 0 )
            {
                m = i;
            }
        }
// search by book number?
        //printf("Enter Book Number You want to view : ");
        //scanf("%d",&m);
        //m = m - 1;
        if(m<n){
        printf("\n\n************** book %d ********************\n",m+1);
        printf("Name = %s\nPages = %d\nPrice = %.2f\nRack = %c\n",b[m].name,b[m].pages,b[m].price,b[m].rack);
        printf("******************************************\n\n");
        }
        else
        {
            printf("Book Not Found");
        }
   /*for(i=0;i<n;i++)
   {
        printf("\n\n************** book %d ********************\n",(i+1));
        printf("Name = %s\nPages = %d\nPrice = %.2f\nRack = %c\n",b[i].name,b[i].pages,b[i].price,b[i].rack);
        printf("******************************************\n\n");
   }*/

}

File Handling ==> Read, write into, Append, Open, close ==> text file, modes of operation
// 20 Questions ==> Submit ==> 1 week.

45 mins ==>  HTML5 ==>






