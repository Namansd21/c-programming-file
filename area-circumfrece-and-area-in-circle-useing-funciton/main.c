/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int func(int a)
{
    printf("diameter is %d\n",a*2);
    printf("circumfrence of the circle is %f\n",2*3.14*a);
    printf("area of circle %f\n",3.14*a*a);
    return 0;
}
int main()
{
    int n;
    printf("enter radius of circle\n");
    scanf("%d",&n);
    func(n);

    return 0;
}
