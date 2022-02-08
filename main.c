/*
COUNTY LIBRARY MANAGEMENT SYSTEM
BY PROGRAMMER ALEXANDER
FEB 2022
MIT LISENCE
C99 COMPILER
*/
#include <stdio.h>
#include <stdlib.h>

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
   return action;

}
int main()
{
   printf("COUNTY LIBRARY SYSTEM!\n");
   printf("WELCOME PROGRAMMER ALEXANDER!\n");
   printf("You selected action %d",menu());
   return 0;
}






