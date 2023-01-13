/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int c = 1;
  for (int i = 1; i <= 5; i++)
    {
      for (int j = i; j <= 4 + c; j++)
	{
	  printf ("%d", j);
	}
      c++;
      printf ("\n");
    }
  return 0;
}
