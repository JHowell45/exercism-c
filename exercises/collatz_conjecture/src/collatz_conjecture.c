#include <stdio.h>

#include "collatz_conjecture.h"

int steps(int start)
{
   if (start <= 0) {
      return ERROR_VALUE;
   }
   int steps = 0;
   int n = start;
   while (n != 1) {
      n = n % 2 == 0 ? n / 2 : n * 3 + 1;
      steps++;
   }
   return steps;
}