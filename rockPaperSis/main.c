#include <stdio.h>

int main(){

  int humanAns;

  printf("Rock Paper Scissors\n");

  printf("Choice your move\n");

  scanf("%d", &humanAns);

  if (humanAns == 1) {
    printf("You picked rock");
  } else if(humanAns == 2) {
    printf("you picked paper");
  } else if(humanAns == 3) {
    printf("You choice Scissors");
  }

  



  
  return 0;
}
