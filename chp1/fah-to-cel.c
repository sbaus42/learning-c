#include <stdio.h>

int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("  F to C\n");
  printf("----------\n");

  fahr = upper;
  while (fahr >= lower) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr - step;
  }

  printf("\n\n  C to F\n");
  printf("----------\n");

  float cel;
  cel = lower;
  while (cel <= upper) {
    fahr = (9.0 / 5.0) * cel + 32.0;
    printf("%3.0f %6.1f\n", cel, fahr);
    cel = cel + step;
  }  
}
