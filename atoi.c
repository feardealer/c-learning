#include <stdio.h>
#include <stdlib.h>

int my_atoi(char s[]);

int main()
{
  char s[] = "199";
  /** my atoi function */
  printf("%d\n", my_atoi(s) + 1);
  /** bult-in atoi function in stdlib.h */
  printf("%d\n", atoi(s) + 1);
  return 0;
}

int my_atoi(char s[])
{
  int i, n = 0;
  for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
    n = 10 * n + (s[i] - '0');

  return n;
}
