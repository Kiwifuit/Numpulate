#include "numpulate.h"
#include "stdio.h"

int main()
{
  int neg = negate(1);
  int rev = reverse(21);

  printf("1 negated is %i\n", neg);
  printf("21 negated is %i\n", rev);
}