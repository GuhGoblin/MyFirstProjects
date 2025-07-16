#include <stdio.h>

int main(){

  float i;

  printf("To ship the package it must weigh 150 pounds or less\n");

  printf("How much does the package weigh\n");
  
  scanf("%f", &i);

  while (i <= 0 || i > 150){

  printf("The Package is to light or heavy\n");

  printf("Please put a vaild weight\n");

  scanf("%f", &i);

  }

  if (i < 10) {
    printf("Light Package Detected\n");
  } else if (i < 50) {
    printf("Normal Package Detected\n");
} else {
  printf("Heavy Package Detected\n");
}

  return 0;
}
