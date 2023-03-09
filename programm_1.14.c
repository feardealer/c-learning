#include <stdio.h>

#define SIZE 2

/** swagman 2022-10-12 06:33:29
dots and commas counter */

int main()
{
  int c, i, j, ndigit[SIZE];

  for (i = 0; i < SIZE; ++i)
    ndigit[i] = 0;
  
  while ((c = getchar()) != EOF) {
    if (c == '.')
      ++ndigit[0];
    else if (c == ',')
      ++ndigit[1];
  }

  printf("%d\n%d\n", ndigit[0], ndigit[1]);
  
  for (i = 0; i < SIZE; ++i) {
    for (j = 0; j < ndigit[i]; ++j)
      printf("#");
  printf("\n");
  }

  return 0;
}
