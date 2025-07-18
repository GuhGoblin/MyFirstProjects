#include <stdio.h>

char task;

int main(){

  int choice;

  

  printf("Welocme to the todo app, what would you like to do\n");

  printf("1: Add task\n");

  printf("2: Veiw Task\n");

  printf("3: Remove task\n");

  printf("4: Exit\n");

  scanf("%d", &choice);

  int addFunc();
  int listFunc();

  while (choice <= 4){
    break;
  } 
  if (choice == 1) {
    addFunc();
  } else if(choice == 2) {
    listFunc();
  }

  return 0;
}


 int addFunc(){

  printf("Enter Task\n");

  scanf("%s\n", &task);

  return main();
}

int listFunc(){

  printf("Here is your task's\n");

  printf("%s", &task);

  return main();
}
