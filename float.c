#include <stdio.h>

int main() {
  float subtotal;
  float tax;
  printf("How much are your groceries? ", subtotal);
  scanf("%f", &subtotal);
  printf("How much is your tax rate? ", tax); // ask the user for the tax rate
  scanf("%f", &tax); // put user input in tax variable
  printf("The final total is: %.2f\n", subtotal + subtotal*tax);
  return 0;
}
