#include <stdio.h>
#include <math.h>
int armstrong(int a)
{
    int c =log10(a)+1;
   
    int sum =0;
    while(a!=0)
    {
        sum =sum+pow((a%10),c);
        a/=10;
    }
    return sum;
}
int armcheck(int a)
{
    for(int n=1;n<=a;n++){
    if(armstrong(n) == n)
    printf("number %d is an armstrong number\n",n);
 
    }
    return 0;
}
int main()
{
    int n;
    printf("please enter the number till you want to check : ");
    scanf("%d",&n);
    armcheck(n);
    return 0;
}