#include <stdio.h>
int my_lower(int c);

/** last modified in 2022-20-16 23:51 */

int main()
{
  int c;
  while ((c = getchar()) != '\n') {
    putchar(my_lower(c));
  }
  return 0;
}
/** 
int my_lower(int c)
{
  if (c >= 'A' && c <= 'Z')
    return c + 'a' - 'A';
  else
    return c;
} */

/** 2.10 rewrite this func */
int my_lower(int c)
{
  c = (c >= 'A' && c <= 'Z') ? c += 'a' - 'A' : c;
  return c;
}
