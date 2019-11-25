void login();

void login()
{
    char super_usr[50] = "admin";
    char super_pwd[50] = "password";
    char usr[50],pwd[50];
    int counts = 1;
    do{
        printf("Attempt Remaining %d \n",(4-counts));
        printf("Enter your Username : ");
        gets(usr);
        printf("Enter your password : ");
        gets(pwd);
        counts++;
    }while( ((strcmp(super_usr,usr)!=0)||(strcmp(super_pwd,pwd)!=0)) && counts<=3);

    if((strcmp(super_usr,usr)==0)&&(strcmp(super_pwd,pwd)==0))
    {
        system("cls");
        printf("\n\nwelcome to Avengers Bank!\n\n");
    }
    else
    {
        system("cls");
        printf("Attempt Remaining %d\n\n",(4-counts));
        printf("Your Account is Locked!\n\n");
    }

}
