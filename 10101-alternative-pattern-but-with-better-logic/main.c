/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    for(int i =1;i<=5;i++){
       for(int j =1;j<=5;j++){
           if(i%2!=0&&j%2==0||j%2!=0&&i%2==0)
               printf("0");
               else 
               printf("1");
           
       }
       printf("\n");
    }

    return 0;
}
