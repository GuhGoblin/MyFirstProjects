#include <stdio.h>

int main() {

int x = 0;

printf("How Old Are You\n");

scanf("%d", &x);

while(x <= 0) {
  printf("Please put a vaild age\n");

  scanf("%d", &x);
  }

  if (x < 18) {
    printf("You are a kid\n");
  } else {
    printf("You are an adult\n");

  }

  

  return 0;
}
