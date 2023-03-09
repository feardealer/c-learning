#include <stdio.h>

/** swagman 2022-10-11 09:38:04 */

main()
{
  int c, i, nwhite, nother;
  int ndigit[10];
  nwhite = nother = 0;

  for (i = 0; i < 10; ++i)
    ndigit[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9')
      ++ndigit[c - '0'];
    else if (c == ' ' || c == '\n' || c == '\t')
        ++nwhite;
    else
      ++nother;
  }
    printf("цифры:");
    for (i = 0; i < 10; ++i)
      printf(" %d", ndigit[i]);

    printf("\nсимволы-разделители: %d\nпрочие:%d\n", nwhite, nother);
  return 0;
}
