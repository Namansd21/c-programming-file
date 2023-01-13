/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    for(int l =1;l<=5;l++){
        printf("* ");
    }
    printf("\n");
    for(int i = 4;i>=1;i--){
        for(int j = 1;j<=5-i;j++){
            printf(" ");
        }
        for(int k = 1;k<=i*2-1;k++){
            if(k==1||k==i*2-1)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}
