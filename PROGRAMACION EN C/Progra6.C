#include <stdio.h>
#include <stdlib.h>

int main() {
/*
  char c = 'c';
  short s = c;
  int i = s;
  long l = i;
  float f = l;
  double d = f;
  printf("char: %c; short: %hd; int: %d; long: %ld; float: %f; double: %lf\n", c, s, i, l, f, d);

  d = 123.45678987654321e+23;
  f = (float) d;
  l = (long) f;
  i = (int) l;
  s = (short) i;
  c = (char) s;
  printf("double: %lf; float: %f; long: %ld; int: %d; short: %hd; char: %c\n", d, f, l, i, s, c);
*/


char mander = '4';
char meleon = 53;
char izard = mander + 2;

printf("%c %c %c\n", mander, meleon, izard);
printf("%d %d %d\n", mander, meleon, izard);
printf("%c %d %c\n", mander, meleon, izard);



  return 0;
}
