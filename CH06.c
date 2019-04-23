/*
*	Exercise CH06 : Body Adiposity Index(BAI)
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define m 1024

int main()
{
    char array[m];
    int hip;
    float height, bai;

    while(fgets(array, m, stdin) != NULL && array[0] != '\n')
    {
      sscanf(array, "%d %f", &hip, &height);
      bai = hip / sqrt(height * height * height) - 18;
      if (bai >= 40.0)
        printf("morbidly obese\n");
      else if (bai >= 30.0)
        printf("obese\n");
      else if (bai >= 25.0)
        printf("overweight\n");
      else if (bai >= 18.5)
        printf("healthy\n");
      else
        printf("underweight\n");
    }
    return 0;
}
