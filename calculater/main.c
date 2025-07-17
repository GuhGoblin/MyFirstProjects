#include <stdio.h>

int main(){

  char op;

  int add();

  int sub();

  printf("Would you like to add or subtract\n");

  printf("enter - or +\n");

  scanf("%c", &op);
    
  if (op == '+') {
    add();
  } else if (op == '-') {
    sub();
  }
  
return 0;  
}





int add(){
  int x;
  int y;

 printf("vaule of 1st number\n");

 scanf("%d", &x);

 printf("value of 2nd number\n");

 scanf("%d", &y);

 printf("%d \n", x + y);
   
return 0;
}





int sub(){

  int x;
  int y;

  printf("Value of 1st number\n");

  scanf("%d", &x);

  printf("Value of 2nd number\n");

  scanf("%d", &y);

  printf("%d\n", x - y);


  return 0;
 
}
