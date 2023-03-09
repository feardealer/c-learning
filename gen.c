#include <stdio.h>
int rand(void);
void my_srand();

unsigned long int next = 1;

int main()
{
  printf("%d\n", rand());
  my_srand();
  return 0;
}

int rand(void)
{
  next *= (1103515245 + 12345);
  return (unsigned int)(next/65536) % 32768;
}

void my_srand(unsigned int seed)
{
  next = seed;
}
