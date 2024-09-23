#include <stdio.h>

int main(void) {
    double real, dollar, conversion;
  printf("Enter the amount of Reais to be converted: R$ ");
      scanf("%lf", &real);
  printf("Enter the current dollar exchange rate: USD$ ");
      scanf("%lf", &dollar);
    conversion = real/dollar; 
printf("\nThe total converted value, in dollars, is: USD$%.2f", conversion);
  return 0;
}
