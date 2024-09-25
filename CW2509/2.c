/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int simple(int a)
{
  int i = 2, u = 0;
  while (i * i <= a)
  {
    if (a % i == 0)
      u++;
    i++;
  }
  if (u == 0)
    return 1;
  else
  {
    return 0;
  }
}

int main()
{
  int i = 128, o = 0;
  o = simple(i);
  printf("%d",o);
  return 0;
}
*/