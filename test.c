#include <stdio.h>
int my_strlen(char s[]);

int main()
{
  char s[] = "test";
  printf("%d\n", my_strlen(s));
  return 0;
}

int my_strlen(char s[])
{
  int i = 0;
  while (s[i] != '\0')
    ++i;
  return i;
}
