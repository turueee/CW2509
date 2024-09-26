/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int dec()
{
  double d = -3.6, i = 0, k = 0;
  int y = 1;
  if (d >= 0)
  {
    i = d - floor(d);
    printf("%lf\n", i);
  }
  else
    i = (-d) + ceil(d);
  i *= 1000000;
  k = i;
  y = (int)round(i);
  while (y % 10 == 0)
    y /= 10;
  return y;
}

int main()
{
  dec();
}
*/