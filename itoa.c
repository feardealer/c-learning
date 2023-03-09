#include <stdio.h>
void itoa(int n, char s[]);
int main()
{
  int i;
  char s[] = "hello";
  scanf("%d", i);
  itoa(i, s);
  printf("%s\n", i);
  return 0;
}

void itoa (int n, char s[])
{
  int i, sign;
  if ((sign = n) < 0) /* сохраняем знак */
    n = -n; /* делаем n положительным */
  i = 0;
  do { /* генерируем цифры в обратном порядке */
    s[i++] = n % 10 + '0'; /* следующая цифра */
  } while ((n /= 10) > 0); /* исключить ее */
  if (sign < 0)
    s[i++] = '-';
  s[i] = '\0';
  reverse(s);
}
