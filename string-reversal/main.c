/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n =4;
    char a[4];
    scanf("%s",a); 
    int c;
    for(int i=0;i<2;i++)
    {
        a[i] = a[n-i-1]^a[i];
        a[n-i-1] = a[n-i-1]^a[i];
        a[i] = a[n-i-1]^a[i];
    }
    printf("%s",a);
    

    return 0;
}
