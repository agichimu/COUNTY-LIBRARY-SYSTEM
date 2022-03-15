/*
COUNTY LIBRARY MANAGEMENT SYSTEM
BY PROGRAMMER ALEXANDER
FEB 2022
MIT LISENCE
C99 COMPILER
*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct Patron{
    char name[100];
    char email[50];
    char password[30];
    int is_staff;
};

void add_patron() {
    struct Patron patron;
    printf("Enter name: ");
    getchar();
    gets(patron.email);
    printf("Enter Email: ");
    gets(patron.email);
    printf("Enter initial password: ");
    gets(patron.email);
    printf("Enter 1 if staff 0 otherwise");
    scanf("%d" ,&patron.is_staff);
    printf("$s added\n" ,patron.name);
}
int menu()
{
   int action;
   printf("Select an Action!\n");
   printf("1.Add new patron!\n");
   printf("2.View patrons!\n");
   printf("3.View Books!\n");
   printf("4.Add New Books!\n");
   printf("Your Action!\n");
   scanf("%d",&action);
   if(action<1|| action > 4) {
        printf("invalid Action. Try again\n");
   }
   return action;
}
void execute_action(int action) {
    switch(action) {
case 1:
    add_patron();
    break;
case 2:
    printf("list of all patrons \n");
    break;
case 3:
    printf("list of all books\n");
    break;
case 4:
    printf("adding a new book\n");
    break;
    default: printf("invalid action .\n");
    }
}

int main()
{
   printf("COUNTY LIBRARY SYSTEM!\n");
   printf("WELCOME PROGRAMMER ALEXANDER!\n");
   execute_action(menu());
   return 0;
}






