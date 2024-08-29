#include <stdio.h>
#include <math.h>
#include "grains.h"

uint64_t square(uint8_t index)
{
   if (index >= 65) {
      return 0;
   }
   printf("Index %d: %llu\n", index, (uint64_t)pow(2, index - 1));
   return (uint64_t)pow(2, index - 1);
}
uint64_t total(void)
{
   /* works by square returning zero and then taking 1 from it wrapping it round
    * to the largest value uint_64t can be */
   return square(65) - 1;
}