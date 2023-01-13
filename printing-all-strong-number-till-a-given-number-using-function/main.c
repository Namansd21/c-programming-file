/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f = f*i;
    }
    return f;
}
int strong(int n)
{
    int c = log10(n)+1;
    int sum =0;
    while(n!=0)
    {
        sum =sum + fact(n%10);
        n/=10;
    }
    return sum;
}
int main()
{
    printf("please enter a number till you want to check armstrong number : ");
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        if(strong(i)==i)
        printf("%d\n",i);
    }
    return 0;
}