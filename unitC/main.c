#include <stdio.h>
float celsiusToFah(float cels) {
  return (cels * 9.0 / 5.0) + 32;  
}

float FahToCelsius(float fah) {
  return (fah - 32.0) / 1.8;
}

int main() {
  while(1) {
    float cels;
    float fah;
  printf("Welcome to my unit conversion program\n");
  printf("What will you be converting\n");
  printf("1 to convert celsius to fah\n");
  printf("2 to conver Fahrenheit to celsius\n");
  int userChoice;
  scanf("%d", &userChoice);  

  if (userChoice == 1) {
  printf("Enter a celsius value\n");
  scanf("%f", &cels);

  float fah = celsiusToFah(cels);
  printf("%.2f Celsius = %2.f Fahrenheit\n", cels, fah);

  } else if (userChoice == 2) {
    printf("Please enter a Fahrenheit value: ");
    scanf("%f", &fah);
    float cels = FahToCelsius(fah);
    printf("%.2f Fahrenheit = %2.f Celsius\n", fah, cels);    
  }
  return 0;  
  }
}
