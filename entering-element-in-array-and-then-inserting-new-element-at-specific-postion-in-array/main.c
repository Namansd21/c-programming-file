/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   printf("please enter the size of the array \n");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("please enter number of element  you want to enter in this array\n");
    int b;
    scanf("%d",&b);
    for(int i=0;i<b;i++)
    {
        scanf("%d",(a+i));
    }
    printf("please enter the element and place to insert element\n");
    int ele,m;
    scanf("%d %d",&ele,&m);
    for(int i=b-1;i>=m-1;i--)
    {
        a[i+1] =a[i];
    }
    a[m-1] = ele;
    for(int i=0;i<=b;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
