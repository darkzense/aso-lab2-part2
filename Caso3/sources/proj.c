/* proj.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../miIncludes/aritReal.h"

int main()
{
  float a,b,c,d;
  a= suma(3.5,3.4);
  b= resta(4.0,2.0);
  c= multiplica(3.0,5.0);
  d= divide(7.0,3.0);
  fprintf(stdout,"a= %f\n b= %f \n c= %f\n d=%f\n", a, b, c, d);
}
