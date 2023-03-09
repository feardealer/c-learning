#include <stdio.h>

int main()
{
  int z, a, b;
  scanf("%d %d", &a, &b);
  z = (a > b) ? a : b;
  printf("%d\n", z);
  return 0;
}
