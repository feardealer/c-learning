#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
  int c, nl, nw, nc, state = OUT;
  nl = nw = nc = 0;

  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\t' || c == '\n')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  printf("\nlines: %d\nwords: %d\nchars: %d\n", nl, nw, nc);
  return 0;
}


