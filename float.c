#include <stdio.h>

int main() {
  float subtotal = 23.84;
  float tax = .09;
  printf("Your subtotal is: %.2f\n", subtotal);
  printf("The tax rate is: %.2f\n", tax);
  printf("The final total is: %.2f\n", subtotal + subtotal*tax);
  return 0;
}
