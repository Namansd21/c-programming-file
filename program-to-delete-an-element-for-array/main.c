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
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    int ele,m;
    printf("please enter the element you want to delete\n");
    scanf("%d",&ele);
    for(int i=0;i<n;i++)
    {
        if(a[i]==ele)
        m = i;
    }
    for(int i=m;i<n;i++)
    {
        a[i] = a[i+1];
    }
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",a[i]);
    }
    

    return 0;
}
