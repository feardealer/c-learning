#include <stdio.h>

/* swagman 2022-10-09 20:38 */

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  
  printf("%s %6s\n", "Fahr", "Celsius");
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %7.2f\n", fahr, celsius);
    fahr += step;
  }
  return 0;
}
