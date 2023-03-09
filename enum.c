#include <stdio.h>

int main()
{
  enum boolean { NO, YES };
  enum escapes { BELL = '\a', BACKSPACE = '\b', TAB = '\t',
  NEWLINE = '\n', VTAB = '\v', RETURN = '\r' };
  enum months { JAN = 1, FEB, MAR, APR, MAY, JUN,
  JUL, AUG, SEP, ОСТ, NOV, DEC };
  enum my_enum { HELLO = 1, MORNING };
  
  printf("%d\n%d\n", (int)APR, (int)MORNING);
  return 0;
}
