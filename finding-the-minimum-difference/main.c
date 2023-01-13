/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                a[j] = a[j]^a[j+1];
                a[j+1] = a[j]^a[j+1];
                a[j] = a[j]^a[j+1];
            }
        }
    }
    //for(int i=0;i<n;i++)
    //{
      //  printf("%d",a[i]);
    //}
    int b[n-1];
    int c=0;
    for(int i=n-2;i>1;i--)
    {  
        b[i] = a[i] -a[i-1];
    }
 /*   for(int i=0;i<n-1;i++)
    {
        printf("%d",b[i]);
    }*/
    int min = b[0];
    for(int i=0;i<=n-2;i++){
    if(min>b[i])
    min = b[i];
    }
    printf("%d",min);
    return 0;
}
