#include<stdio.h>

void login();
void menu();
void balance();
void withdraw();
void deposit();
void proceed();

int TotalBalance = 1000;

void main()
{
    login();
}

// proceed
void proceed()
{
    char ch;
    printf("\nPress Y to continue ... ");
    scanf(" %c",&ch);
    if(ch == 'y' || ch == 'Y')
    {
        system("cls");
        menu();
    }
    else
    {
        printf("\nThank You for Visiting Avengers Bank !\n");
    }
}

// deposit
void deposit()
{
    int da;
    system("cls");
    printf("Enter Deposit Amount : ");
    scanf("%d",&da);
    if(da<=5000)
    {
        TotalBalance = TotalBalance + da;
        printf("\n\nDeposit Amount = %d\n\n",da);
        printf("Total Available Balance = %d\n\n",TotalBalance);
    }
    else
    {
        printf("\n\nThis Amount Cannot be Deposited!\n\n");
    }
}


// withdraw
void withdraw()
{
    int wa;
    system("cls");
    printf("Enter Withdraw Amount : ");
    scanf("%d",&wa);
    if((wa<=5000) && (wa<=TotalBalance))
    {
        TotalBalance = TotalBalance - wa;
        printf("\n\nWithdraw Amount = %d\n\n",wa);
        printf("Balance Left = %d\n\n",TotalBalance);
    }
    else
    {
        printf("\n\nTransaction Canceled!\n\n");
    }
}

// Balance check
void balance()
{
    system("cls");
    printf("\n\nYour Current Balance is %d\n\n",TotalBalance);
}

// menu
void menu()
{
    int option;
    printf("************* Welcome to Avengers Bank **************\n");
    printf("Choose : \n1. Check Balance\n2. Withdraw\n3. Deposit\n4. Exit\n   Select: ");
    scanf("%d",&option);
    switch(option)
    {
    case 1:
        balance();
        proceed();
        break;
    case 2:
        withdraw();
        proceed();
        break;
    case 3:
        deposit();
        proceed();
        break;
    case 4:
        exit(0);
        break;
    default:
        printf("\nInvalid Option\n");
        proceed();
    }
}

// login function
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
        menu();
    }
    else
    {
        system("cls");
        printf("Attempt Remaining %d\n\n",(4-counts));
        printf("Your Account is Locked!\n\n");
    }

}
