#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

  int humanAns;

  int ai();

  printf("Rock Paper Scissors\n");

  printf("Choice your move\n");

  printf("1: Rock\n");
  printf("2: papper\n");
  printf("3: Scissors\n");

  scanf("%d", &humanAns);

    if (humanAns == 1) {
    printf("You picked rock\n");
  } else if(humanAns == 2) {
    printf("you picked paper\n");
  } else if(humanAns == 3) {
    printf("You choice Scissors\n");
  } 
  
  return ai();
}


int ai() {

  srand(time(NULL)); 

  int aiAns = rand() %3;

  printf("Ai's turn\n");

     if(aiAns == 1) {
    printf("Ai picks Rock\n");
  }  else if(aiAns == 2){
    printf("Ai picks Paper\n");
   } else if(aiAns == 3){
    printf("Ai picks Scissors\n");
  }
  
return 0;
}
