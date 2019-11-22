// String ==> collection of character
// double quote ""

#include<stdio.h>
// gets ==>  get string , puts ==> print string
void main()
{
    char str[20] = "Apple";
    //char str1[30];
    char str2[50];

    //printf("Enter any string 1 ");
    //scanf(" %s",str1);

    printf("Enter String 2 ");
    gets(str2);

    printf("The String is : %s\n",str);
    //printf("The String 1 is : %s\n",str1);
    puts(str2);
}
