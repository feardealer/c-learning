#include <stdio.h>

main()
{
  double nc;
  int c;

  for (nc = 0; getchar() != EOF; ++nc)
    ;

  printf("%.0f\n", nc);
  return 0;
}
