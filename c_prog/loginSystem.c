#include<stdio.h>
#include<string.h>
// attempt 3 // multiuser login

// banking transaction using functions
void main()
{
    char super_usr[20] = "admin";
    char super_pass[20] = "password";
    char usr[20],pass[20];
    int count;
    for(count = 2; count>=0;count--){
        system("cls");
        printf("Enter your username : ");
        gets(usr);
        printf("Enter your password : ");
        gets(pass);
        if((strcmp(super_usr,usr)==0) && (strcmp(super_pass,pass)==0))
        {
            system("cls");
            printf("Welcome %s",usr);
            break;
        }
        else
        {
            system("cls");
            printf("Invalid Credentials ");
            printf("\nAttempt Remaining %d",count);
            printf("\nPress any key to continue ...");
            getchar();
        }
         getchar();
    }
}



/*
void main()
{
    char str1[30] = "ABC";
    char str2[30] = "DBC";
    int x = strcmp(str1, str2);
    printf("%d",x);

}

equal = 0
left greater = +1
right greater = -1

 based on Ascii

 str1 D  B  C
      68 66 67
 str2 A  B  C
      65 66 67


 */
