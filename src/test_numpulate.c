#include "numpulate.h"
#include "stdio.h"

int main()
{
  int neg = negate(1);
  int rev = reverse(129);

  printf("1 negated is %i\n", neg);
  printf("129 negated is %i\n", rev);
}