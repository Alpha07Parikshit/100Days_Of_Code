#include <stdio.h>

int main () {
    float celsius, fahrenheit;
     printf("Enter the temprature in celsius: ");
     scanf("%f", &celsius); 

     fahrenheit = (celsius * 9 / 5) + 32;

     printf("The temprature in fahrenheit: %.f", fahrenheit);

     return 0;
}