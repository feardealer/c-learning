#include <stdio.h>

#define LIMIT 10

int main()
{
  int c, i = 0;
  char s[LIMIT];
  for (i = 0; (c = getchar()) != EOF; ++i) {
    s[i] = c;
    if (i == LIMIT-1)
      break;
    if (c == '\n')
      break;
    s[i] = c;
  }
  s[i] = '\0';
  printf("%s\n", s);
  return 0;
}
