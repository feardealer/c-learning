#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
  int c, nw, state = OUT;
  nw = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      ++nw;
      putchar('\n');
    }
    putchar(c);
  }
  return 0;
}
