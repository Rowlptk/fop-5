#include<stdio.h>
#include<string.h>
void main()
{
    char str1[40] = "AbcdefghiJklmnopqrstUvwxyZ";
    char str2[20] = "Apple";
    char str3[20] = " mango";
    printf("The length of str1 is %d",strlen(str1));
    printf("\n\nUPPERCASE : %s",strupr(str1));
    printf("\n\nlowercase : %s\n",strlwr(str1));
    printf("\nReverse : %s\n",strrev(str1));
    printf("\nConcatenate : %s\n",strcat(str2,str3));
    strcpy(str2, str3);
    printf("\nstr2 = %s\nstr3 = %s\n",str2,str3);
}

// strlen() ==> length calculate ==> integer
// strlwr() ==> lowercase ==> string
// strupr() ==> uppercase ==> string
// strcat() ==> concatenate string ==> string lai jodne
// strcpy() ==> string copy from one to another
// strcmp() ==> compare string based ASCII Code

        // ==> 0 ==> strings are equal
        // ==> -ve, +ve ==> intger

// strrev() ==> reverse string
