#include <stdlib.h>

#include "resistor_color.h"

uint16_t color_code(resistor_band_t color)
{
   return color;
}

const resistor_band_t *colors(void)
{
   resistor_band_t *c = calloc(10, sizeof(resistor_band_t));
   for (resistor_band_t band = BLACK; band <= WHITE; band++) {
      c[band] = band;
   }
   return c;
}