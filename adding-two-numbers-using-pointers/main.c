/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    int *ptr;
    for(int i=0;i<n;i++)
    {   
        ptr = a+i;
        b[i] = *ptr;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",b[i]);
    }

    return 0;
}
