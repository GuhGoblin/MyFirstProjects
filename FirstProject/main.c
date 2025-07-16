#include <stdio.h>

int main(){

  int x;

  printf("What's your age:\n");

  scanf("%d", &x);


  if (x <= 0) {
    printf("You are not born yet\n");

  } else if (x < 18) {
    printf("You are a child\n");
    
  } else {
    printf("You are a adult\n");
  }

  return 0;

}
