/*
* FILENAME:    f
* PROGRAMMER:  Gary J. Blair
* DATE:        7/13/1992
* LANGUAGE:    ANSI C
* PURPOSE:
*  Illustrate the use of projects/multi-file programs.
*
* NOTES:
*  This code resides in file f.c.
*/

#include "f.h"

float f( float x )
{
   return x * x - 2 * x + 17;
}