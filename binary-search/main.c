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
    printf("please enter the length of array");
    scanf("%d",&n);
    int a[n];
    printf("please enter the element\n");
    int p;
    scanf("%d",&p);
    printf("please enter the element in array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n;i++)
    {
        int cuurent = a[i];
        int j=i;
        while(j>=1&&cuurent<a[j-1])
        {
            a[j] = a[j-1];
            j--;
        }
        a[j] = cuurent;
    }
    int s = 0;
    int e = n;
    int flag =1;
    while(s<=e)
    {
        int mid =(s+e)/2;
        if(a[mid] == p)
        {
            printf("%d ",mid+1);
            flag =0;
            break;
        }
        else if(a[mid]<p)
        {
            s = mid+1;
            
        }
        else
         e = mid-1;
    }
    if(flag == 1)
    printf("element do not exist \n");
    return 0;
}
