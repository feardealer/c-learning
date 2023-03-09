#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 10

float fahr_to_cel(float fahr);

int main()
{
  int fahr;
  for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
    printf("%3d %6.2f\n", fahr, fahr_to_cel(fahr));
  }
  return 0;
}

float fahr_to_cel(float fahr)
{
  float cel;
  cel = (5.0/9.0) * (fahr-32);
  return cel;
}
