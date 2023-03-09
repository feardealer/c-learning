#include <stdio.h>
int power(int n, int m);

int main()
{
  int i;
  for (i = 0; i < 10; ++i)
    printf("%d %d %d\n", i, power(2, i), power(-3, 1));

  return 0;
}

/** function for exponentiation */
int power(int base, int n) {
  int i, p;
  p = 1;
  for (i = 1; i <= n; ++i)
    p *= base;
  return p;
}
