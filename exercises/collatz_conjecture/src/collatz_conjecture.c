#include <stdio.h>

#include "collatz_conjecture.h"

int steps(int start)
{
   int steps = 0;
   int n = start;
   while (n != 1) {
      if (n % 2 == 0) {
         n /= 2;
      } else {
         n = (n * 3) + 1;
      }
      steps++;
   }
   return steps;
}