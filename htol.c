#include <stdio.h>
#include <stdint.h>
#include <ctype.h>
 
uint32_t
foo (const uint8_t * s)
{
  uint32_t result = 0;
  uint8_t checkout = 0;
  const uint8_t * ptr = s;
 
  // проверяем наличие первых символов "0x" или "0X"
  checkout = ptr != NULL &&
    ptr[0] == '0' &&
    ptr + 1 != NULL &&
    (ptr[1] == 'x' || ptr[1] == 'X');
 
  if (checkout) {
    ptr = s + 2;
 
    while (*ptr) {
      result <<= 4; // сдвиг влево на 4 бита. 4 бита необходимы для одной 16й цифры
      if (isdigit(*ptr)) // если символ в диапазоне [0,9]
    result += *ptr - '0'; // отнять от символа код символа '0'
      else if (isalpha(*ptr)) { // если символ есть буква алфавита
    // вычитаем код символа в зависимости от регистра исходного символа
    // так 'B' - 'A' == 1, 'c' - 'a' == 2, etc
    int32_t t = isupper(*ptr) ? *ptr - 'A' : *ptr - 'a';
    // no comment
    t += 10;
    // если число в диапазоне, то прибавляем к результату
    if (t <= 0xF && t >= 0xA)
      result += (uint32_t)t;
    else { // иначе обрываем работу и возвращаем 0
      result = 0;
      break;
    }
      }
      ptr++;
    }
  }
 
  return result;
}
 
 
int
main (int argc, char ** argv)
{
  unsigned char s[64];
  scanf("%s", &s);
  fprintf(stdout, "%X\n", foo(s));
  return 0;
}
