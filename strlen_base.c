#include <stdio.h>
#include <string.h>

/** int strlen(char s[]); */

int main()
{
  char s[] = "test";
  printf("%s\n%d\n", s, strlen(s));
  return 0;
}

/** int strlen(char s[])
{
  int i = 0;
  while (s[i] != '\0')
    ++i;
  return i;
} */
