/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[10] = {2,3,2,1,4,6,7,2,37,2};
    int max = a[0];
    int b[1000] ={0};
    for(int i=0;i<10;i++)
    {
        if(max<a[i])
        max = a[i];
    }
    b[max+1];
    for(int i=0;i<10;i++)
    {
        b[a[i]]++;
    }
    for(int i=0;i<max+1;i++)
    {
        if(b[i]!=0)
        printf("frequency of %d is %d\n",i,b[i]);
    }

    return 0;
}
