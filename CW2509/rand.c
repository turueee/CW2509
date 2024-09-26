
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double ran(double ymin, double ymax,int t)
{
  double p = 0, y = 0, k = 0;
  int i = 0,x = 0;
  srand(time(0)+t*4345);
  x = rand();
  p = (double)x / RAND_MAX;
  k = p * (ymax - ymin);
  y = k + ymin;
  return y;
}

int dec(double d)
{
  double i = 0;
  int y = 1;
  if (d >= 0)
  {
    i = d - floor(d);
  }
  else
    i = (-d) + ceil(d);
  i *= 1000000;
  y = (int)round(i);
  return y;
}

int main()
{
  double y = 0,ymin = 0, ymax = 0;
  int n = 0,i = 0;
  scanf("%lf", &ymin);
  scanf("%lf", &ymax);
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    y = ran(ymin, ymax,i);
    printf("%lf %d\n", y, dec(y));
  }
}
