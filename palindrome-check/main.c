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
    scanf("%s",a);
    int flag =1;
    int n =strlen(a);
    for(int i=0;i<n/2;i++)
    {
        if(a[i]!=a[n-1-i])
        {
            flag = 0;
            break;
        }
    }
    if(flag == 0)
    printf("string is not palindrom\n");
    else
    printf("string is palindrom \n");

    return 0;
}
