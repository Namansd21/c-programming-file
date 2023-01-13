/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int factorial(int n)
{
    int c =1;
    for(int i=1;i<=n;i++)
    {
        c = c*i;
    }
    return c;
}
int strong(int n)
{
    int c = log(n)+1;
    int f =0;
    int d =n;
    int r;
    while(n!=0)
    {
        r = n%10;
        f = f+ pow(r,c);
        n/=10;
    }
    if(d==f)
    return 1;
    else
    return 0;
}
int prime(int n)
{
    int c =0;
    for(int i=1;i<=n;i++)
    {
      if(n%i==0)
      c++;
    }
    if(c==2)
    return 1;
    else
    return 0;
}
int armstrong(int n)
{
    int c = log(n)+1;
    int f =0;
    int d =n;
    int r;
    while(n!=0)
    {
        r = n%10;
        f = f + factorial(r);
        n = n/10;
    }
    if(f==d)
    return 1;
    else
    return 0;
}
int check(int n){
    if(prime(n)== 1)
    printf("numeber is prime\n");
    else if(prime(n)==0)
    printf("Number is not  a prime\n");
    if(strong(n)== 1)
    printf("numeber is strong\n");
    else if(strong(n)==0)
    printf("Number is not  a strong\n");
    if(armstrong(n)== 1)
    printf("numeber is armstrong\n");
    else if(armstrong(n)==0)
    printf("Number is not  a armstrong\n");

    return 0;
}
int main()
{
    int n;
    printf(" enter a number you want to check\n");
    scanf("%d",&n);
    check(n);
    
    return 0;
}
