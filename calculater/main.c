#include <stdio.h>

int main(){

  char op;

  int add();

  int sub();

  int mult();

  int div();

  printf("You can add/sub/multiply/divide");

  printf("+, -, *, /\n");

  scanf("%c", &op);
    
  if (op == '+') {
    add();
  } else if (op == '-') {
    sub();
  } else if (op == '*') {
    mult();
  } else if (op == '/'){
    div();
  }
  
return 0;  
}





int add(){
  double x;
  double y;

 printf("vaule of 1st number\n");

 scanf("%lf", &x);

 printf("value of 2nd number\n");

 scanf("%lf", &y);

 printf("%lf\n", x + y);
   
return 0;
}





int sub(){

  double x;
  double y;

  printf("Value of 1st number\n");

  scanf("%lf", &x);

  printf("Value of 2nd number\n");

  scanf("%lf", &y);

  printf("%lf\n", x - y);


  return 0;
 
}

int mult(){

  double x;
  double y;

  printf("Value of 1st number\n");

  scanf("%lf", &x);

  printf("value of 2nd number\n");

  scanf("%lf", &y);

  printf("%lf\n", x * y);

  return 0;
}

int div(){

  double x;
  double y;

  printf("Value of 1st number\n");

  scanf("%lf", &x);

  printf("value of 2nd number\n");

  scanf("%lf", &y);

  printf("%lf\n", x / y);

  return 0;
}
