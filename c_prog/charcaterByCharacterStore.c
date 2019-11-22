#include<stdio.h>
// getchar() = single character at a time ==> input
// putchar() = single character at a time ==> output
// tolower() = lowercase
// toupper() = uppercase
void main()
{
    char str[1000], t,ch;
    int i = 0;
    printf("Enter a terminating Character : ");
    scanf(" %c",&t);
    printf("Enter a very long string : ");
    while(ch != t)
    {
        // scanf(" %c",&ch);
        ch = getchar();
        ch = toupper(ch);
        str[i] = ch;
        i++;
    }
    printf("The Strings Value are : \n");
    printf("\n%s",str);
}
