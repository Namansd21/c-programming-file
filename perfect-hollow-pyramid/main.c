/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    for(int i =1;i<=4;i++){
        for(int j =1;j<=5-i;j++){
            printf(" ");
        }
        for(int k =1;k<=i*2-1;k++){
            if(k==1||k ==i*2-1)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
        
    }
    for(int k =1;k<=5;k++){
            printf("* ");
        }

    return 0;
}
