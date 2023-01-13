/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    int no;
    
    scanf("%d",&no);
    if(no<=n/2){
    for(int i=0;i<no;i++)
    {
        a[i] = a[i]^ a[(n-1)-i];
        a[(n-1)-i] = a[(n-1)-i]^a[i];
        a[i] = a[i]^ a[(n-1)-i];
    }}
    for(int i =0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
        
    return 0;
}
