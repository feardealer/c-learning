#include <stdio.h>

main()
{
  int c, nl = 0, nt = 0, ns = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++nl;
    if (c == '\t')
      ++nt;
    if (c == ' ')
      ++ns;
  }
  printf(" lines: %d\n tabs: %d\n spaces: %d\n", nl, nt, ns);
  return 0;
}
