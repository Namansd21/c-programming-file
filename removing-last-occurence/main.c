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
  char s[500];
  scanf("%[^\n]",s);
  int l = strlen(s);
  
  printf("please enter the character your want to remove : ");
  scanf("\n");
  char c;
  scanf("%c",&c);
  for(int i=l-1;i>=0;i--)
  {
      if(s[i] == c)
      {
          for(int j = i;j<l;j++)
          {
              if(j !=l-1)
              s[j] = s[j+1];
              else
              s[j] =0;
          }
          break;
      }
  }
printf("%s",s);
    return 0;
}
