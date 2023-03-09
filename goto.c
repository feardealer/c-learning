#include <stdio.h>

int main()
{
  int n;

  printf("%s\n", "вам есть 18?");
  scanf("%d", &n);
  if (n < 18)
    goto idi_na_huy;

  printf("%s\n", "тебе есть 18");
  idi_na_huy:
  printf("%s\n", "конец");

  return 0;
}
