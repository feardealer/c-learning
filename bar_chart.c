#include <stdio.h>
#include <string.h>

#define BUF 80
char buf[BUF];
 
void convert_to_hystogram(char* str, const char* delimiters)
{
  while( *str ) {
    if( strchr(delimiters, *str) ) {
        *str = '\n';
    } else {
        *str = '*';
    }
    ++str;
  }
}

int main(int argc, char* argv[])
{
  puts("Enter words:");
  fgets(buf, BUF, stdin);
  convert_to_hystogram(buf, " ,.;\n");
  puts(buf);
}
