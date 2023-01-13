/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int power(int n,int a)
{
    int c =1;
    for(int i=0;i<a;i++)
    {
        c= c*n;
    }
    return c;
    
}
int main()
{
    printf("please enter the number and its space seperated power : ");
    int n,a;
    scanf("%d%d",&n,&a);
    printf("%d",power(n,a));
    return 0;
}
