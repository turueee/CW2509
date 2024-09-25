/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ran(double ymin, double ymax,int j)
{
  double p = 0, y = 0, k = 0;
  int i = 0,x = 0;
  srand(time(0));

  for (i = 0; i < j; i++)
  {
    x = rand();
    p = (double)x / RAND_MAX;
    k = p * (ymax - ymin);
    y = k + ymin;
    printf("%d\t%lf\t%lf\t%lf\n", x, p, k, y);
  }
  return 0;
}

int main()
{
  double ymin = 0, ymax = 0;
  int n = 0;
  scanf("%lf", &ymin);
  scanf("%lf", &ymax);
  scanf("%d", &n);
  ran(ymin,ymax,n);
}
*/