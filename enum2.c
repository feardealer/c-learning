#include <stdio.h>
int my_strlen(char s[]);

int main()
{
  char s[] = "hello!";
  enum boolean { YES = 1, NO };
  enum test { TEST1 = 0, TEST2 };
  printf("%d\n", my_strlen(s));
  printf("%d\n%d\n", NO, TEST2);
  return 0;
}

int my_strlen(char s[])
{
  int i = 0;
  while (s[i] != '\0')
    ++i;
  return i;
}
