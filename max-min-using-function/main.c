/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int man(int a,int b)
{
    a>b?printf("a is bigger and b is smaller\n"):printf("b is max and a is min");
    return  0;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    man(a,b);
    return 0;
}
