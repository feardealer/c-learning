#include <stdio.h>

int main()
{
  char s[64], c[64];
  scanf("%s %s", &s, &c);
  printf("%s %s\n", s, c);

  return 0;
}
/** 
int squeeze(char s[], int с)
{
  int i, j, c;
  for (i = j = 0; s[i] != '\0'; i++)
    if (s[i] != c)
      s[j++] = s[i];
  s[i] = '\0';
  return s;
} */
