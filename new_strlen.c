#include <stdio.h>
int my_strlen(char s[]);

int main()
{
  char s[64];
  scanf("%s", &s);
  printf("%d\n", my_strlen(s));
}

int my_strlen(char s[])
{
  int i = 0;
  while (s[i] !='\0')
    ++i;

  return i;
}
