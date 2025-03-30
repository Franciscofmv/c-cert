/*
* FILENAME:   what.c
* PROGRAMMER: Gary J. Blair
* DATE:       7/13/1992
* LANGUAGE:   ANSI C
* PURPOSE:    Illustrate the use of projects/multi-file programs.
* NOTES:      This code resides in file what.c.
*/

#include      <stdio.h>
#include      "f.h"

int main(void)
{
  float x, y;

  printf("Enter a float value for x ");
  scanf("%f",&x);
  y = f(x);
  printf("f(%g) = %g\n",x,y);
  return 0;
}