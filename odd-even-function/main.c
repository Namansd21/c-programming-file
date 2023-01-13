/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void oe(int n)
{
    if(n%2==0)
    printf("even\n");
    else
    printf("Odd\n");
}
int main()
{
    printf("please enter the  number\n");
    int n;
    scanf("%d",&n);
    oe(n);

    return 0;
}
