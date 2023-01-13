/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
   char p[500];
   scanf("%[^\n]",p);
  
   int l = strlen(p);
   int s,e=0;
   e = strlen(p)-1;

   for(int i= l-1;i>=0;i--)
   {
       if(p[i]==' ')
       {
           s = i+1;
           for(int j =s;j<=e;j++)
           {
               printf("%c",p[j]);
           }
           printf(" ");
           e=s-2;
       }
       
   }
   for(int i=0;p[i]!=' ';i++)
   {
       printf("%c",p[i]);
   }

    return 0;
}
