
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double ran(double min_ch, double max_ch,int sid_variable)
{
  double zero_one = 0, random_number = 0, zero_max_ch = 0;
  int randomization = 0;
  srand(time(0)+ sid_variable * 4345);
  randomization= rand();
  zero_one = (double)randomization/ RAND_MAX;
  zero_max_ch= zero_one * (max_ch - min_ch);
  random_number = zero_max_ch + min_ch;
  return random_number;
}

int dec(double double_variable)
{
  double remain = 0;
  int int_remain = 1;
  if (double_variable >= 0)
  {
    remain = double_variable - floor(double_variable);
  }
  else
    remain = (-double_variable) + ceil(double_variable);
  remain *= 1000000;
  int_remain = (int)round(remain);
  return int_remain;
}



int main()
{
  double random_number = 0,min_ch = 0, max_ch = 0;
  int count_of_numbers = 0, counter = 0,index_of_massive = 0, dec_remain;
  char first_massive_of_remains[250000], second_massive_of_remains[250000];
  char third_massive_of_remains[250000], fourth_massive_of_remains[250000];
  for (counter; counter < 250000; counter++)
  {
    first_massive_of_remains[counter] = 0;
    second_massive_of_remains[counter] = 0;
    third_massive_of_remains[counter] = 0;
    fourth_massive_of_remains[counter] = 0;
  }
  scanf("%lf", &min_ch);
  scanf("%lf", &max_ch);
  scanf("%d", &count_of_numbers);
  for (counter = 0; counter < count_of_numbers; counter++)
  {
    random_number = ran(min_ch, max_ch,counter);
    dec_remain = dec(random_number);
    if (dec_remain >= 0 && dec_remain < 250000)
    {
      first_massive_of_remains[dec_remain] = 1;
    }
    else if (dec_remain >= 250000 && dec_remain < 500000)
    {
      second_massive_of_remains[dec_remain-250000] = 1;
    }
    else if (dec_remain >= 500000 && dec_remain < 750000)
    {
      third_massive_of_remains[dec_remain - 500000] = 1;
    }
    else
    {
      fourth_massive_of_remains[dec_remain - 750000] = 1;
    }
    printf("%lf %d\n", random_number, dec(random_number));
  }
}
