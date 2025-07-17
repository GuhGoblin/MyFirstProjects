#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main(){

int humanAns;

printf("Rock Paper Scisccors\n");

printf("1 Rock\n");
printf("2: Paper\n");
printf("3: Scisccors\n");

scanf("%d", &humanAns);

  if(humanAns == 1) {
  printf("You choice Rock\n");
} else if(humanAns == 2) {
  printf("You Choice Paper\n");
} else if(humanAns == 3) {
  printf("You picked Scissors\n");
}

srand(time(NULL));

int aiAns = rand() %3 +1;

printf("Ai's turn\n");

  if(aiAns == 1) {
  printf("Ai picks Rock\n");
} else if(aiAns == 2) {
  printf("ai picks paper\n");
} else if (aiAns == 3) {
  printf("Ai picks Scissors\n");
}

int humanWin = humanAns;
int aiWin = aiAns;

if (humanWin == aiWin) {
  printf("Draw!");
}

  if(humanWin == 1 && aiWin == 3) {
    printf("You Win!\n");
  }else if (humanWin == 2 && aiWin == 1) {
    printf("You win!\n");
  }else if(humanWin == 3 && aiWin == 2) {
    printf("You Win!\n");
  }

  if(aiWin == 1 && humanWin == 3){
    printf("You lost!\n");
  }else if(aiWin == 2 && humanWin == 1) {
    printf("You lost\n");
  }else if(aiWin == 3 && humanWin == 2){
    printf("You lost!\n");
  }

  return 0;
}
