#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a, *b;
  a = 134;
  b = &a;
  // %x = вывод числа в шестнадцатеричной форме
  printf("\n Value of a is %d = x%x.", a, a);
  printf("\n address of a is x%x", &a);
  printf("\n Value by addr from pointer b is %d = x%x", *b, *b);
  printf("\n Value of pointer b is x%x", b);
  printf("\n Adr of pointer b is x%x", &b);
  getchar();
  return 0;
}