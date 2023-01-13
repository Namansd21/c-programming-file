/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("please enter the value of the size of array \n");
    int n;
    scanf("%d",&n);
    int a[n],c[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
        *(c+i) = *(a+i);
    }
     for(int i=0;i<n;i++)
    {
        printf("%d ",*(c+i));
    }

    return 0;
}
