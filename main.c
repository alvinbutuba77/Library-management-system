/*
    Project: Library Management System
    Author : O. Butuba
    Date   : Nov 2, 2021
    Compiler: GCC
    Language: C99
    License : MIT

*/

/*

Users - view users add, edit, delete, login, change password

Catalogue
Issuance
Serial
Acquisition

Navigation

*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int menu(); //prototype

int main()
{

    int action;
    action = menu();//function call

    //execute action

    return 0;
}//end main

//function definition
int menu()//header
{
    int action;
    do {
        printf("Welcome to County Onine Library!\n ");
        printf("What would you like to do?\n");

        printf("1. view users. \n");
        printf("2. Add new User. \n");
        printf("3. Edit User. \n");
        printf("4. Delete User. \n");
        printf("5. Change Password");
        printf("6. Logout. \n");
        printf("7. Exit \n");

        printf("Selected action(1-7): ");
        scanf("%d", &action);
        if(action < 1 || action > 7) {
            system("cls");// clears space
            printf("\n Invalid Action. Try again \n");
    }//end if

    }while (action < 1 || action > 7);

    return action;
}
