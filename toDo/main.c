#include "stdio.h"
#include <string.h>
#define MAX_TASK 10
#define MAX_LENGTH 100


char task[MAX_TASK][MAX_LENGTH];
int task_count = 0;



int main() {
  int choice;

  
  while(1){
    printf("Welcome to my todo CLI\n");
    printf("1. Add task to list\n");
    printf("2. List tasks\n");
    printf("3. Remove Task\n");
    printf("Enter your choice\n");

    scanf("%d", &choice);
    getchar();



    switch(choice) {
    case 1: {
      if(task_count >= MAX_TASK){
	printf("Your task list is full!\n");

	break;
      }

      printf("Enter Your Task: ");
      fgets(task[task_count], MAX_LENGTH, stdin);
      task[task_count][strcspn(task[task_count], "\n")] = 0;
      printf("task added: %s\n", task[task_count]);
      task_count++;
      break;
     
    }
    case 2:
      
    }
  
  }
}
