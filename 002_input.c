#include <stdio.h>

int main()
{
  //VARIABLE DECLARATION AND INITIALIZATION
  char name[30] = "placeholder";
  char quest[30] = "placeholder2";
  char color[30] = "placeholder3";

  //PROGRAM OPEN
  printf("\nHello there. This is the guard of the qreat bridge.\n");
  printf("\nI will challenge you with some basic questions.\n");

  //INPUT
  printf("\nWhat is your name? \n");
  scanf("%s", name);

  printf("\nWhat is your quest? \n");
  scanf("%s", quest);

  printf("\nWhat is your favorite color? \n");
  scanf("%s", color);

  //OUTPUT
  printf("\nRESULTS:\n");

  printf("\nYour name is: %s\n", name);
  printf("Your quest is: %s\n", quest);
  printf("Your favorite color is: %s\n", color);

  //PROGRAM CLOSE
  printf("\nYou may pass. Have a nice day.\n");

  return 0;

}
