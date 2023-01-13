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
    printf("please enter the size of the array \n");
    scanf("%d",&n);
    int a[n];
    printf("please enter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    for(int i=1;i<n;i++)
    {
        int current  = a[i];
        int j = i;
        while(j>=1&&current<a[i-1])
        {
            a[i] = a[i-1];
            j--;
        }
        a[j] = current;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }

    return 0;
}
