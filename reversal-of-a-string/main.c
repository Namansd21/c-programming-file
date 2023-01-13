/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%[^\n]",a);
    int c =strlen(a);
    for(int i=c-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }

    return 0;
}
