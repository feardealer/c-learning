#include <stdio.h>

/* swagman 2022-10-09 22:19 */

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 10;

  lower = celsius;
  
  printf("%s %6s\n", "Celsius", "Fahr");
  while (celsius <= upper) {
    fahr = (celsius*(9.0/5.0)) + 32.0;
    printf("%3.0f %12.2f\n", celsius, fahr);
    celsius += step;
  }
  return 0;
}
