/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float a,b,c,d,e,sum;
    printf("please enter marks of subject a : ");
    scanf("%f",&a);
    printf("\nplease enter marks of subject b : ");
    scanf("%f",&b);
    printf("\nplease enter marks of subject c : ");
    scanf("%f",&c);
    printf("\nplease enter marks of subject d : ");
    scanf("%f",&d);
    printf("\nplease enter marks of subject e : ");
    scanf("%f",&e);
    printf("\n the sum of marks are %f ",a+b+c+d+e);
    sum = a+b+c+d+e;
    printf("\n average marks of the student is %f",sum/5);
    printf("\n percentage of marks is %f",sum*100/500);

    return 0;
}
