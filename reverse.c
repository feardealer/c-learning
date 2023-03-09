#include <stdio.h>
#include <string.h>

void my_reverse(char s[])

int main()
{
  char s[] = "hello, world!";
  my_reverse(s);
  printf("%s\n", s);
}

void my_reverse(char s[])
{
  int c, i, j;
  for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
    с = s[i];
    s[i] = s[j];
    s[j] = c;
  }
}
