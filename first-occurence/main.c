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
    printf("please enter the charcater : \n");
    scanf("\n");
    char b ;
    scanf("%c",&b);
    int i;
    for(i =0;i<strlen(a);i++)
    {
        if(a[i] ==b)
        break;
    }
    printf("%d\n",i-1);
    return 0;
}
