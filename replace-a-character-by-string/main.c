/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    int a,b;
    char s[500], p[500],l[500];
    printf("please enter the string ");
    scanf("%[^\n]",s);
  //  printf("%s\n",s);
    printf("please enter the string to be replace ");
    scanf("\n");
     fgets(p,500,stdin);
//     printf("%s",p);
   
    printf("please  enter character to replace ");
    char c;
    scanf("%c",&c);
  //   printf("%c",c);
    
     
     a = strlen(s);
     b = strlen(p)-1;
     int k=0,j,m;
     printf("%c",s[a+1]);
    for(int i=0;i<a;i++)
    {
        if(s[i] == c)
        {
           for(int z =i+1;z<a+1;z++)
           {
               l[k] = s[z];
               k++;
           }
           k=0;
           for( j = i;j<b+i;j++)
           {
               s[j] = p[k];
               k++;
             //  printf("%c ",s[j]);
           }
           k = 0;
          for( m = j;l[k];m++)
          {
              s[m] = l[k];
              k++;
          }
        
        break;
            
        }
    }
   
    printf("%s",s);
    
    return 0;
}
