/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    printf("please enter the number you want to generate random number between\n");
    int a,b;
    scanf("%d %d",&a,&b);
    srand(time(0));
    int c;
    if(a>b)
    {
        c = (rand()%(a-b+1))+b;
        
    }
    else
    {
       c = (rand()%(b-a+1))+a;   
    }
    printf("%d",c);
    return 0;
}
