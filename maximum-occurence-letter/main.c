/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    char s[500];
    scanf("%[^\n]",s);
    int l = strlen(s);
    int c[26] = {0};
    for(int i=0;i<l;i++)
    {
        if(s[i]>=65&&s[i]<=91)
        {
            s[i] =s[i]+32;
        }
        c[s[i]-97]++;
    }

    int max =0;
    int j=0;
    for(int i=0;i<27;i++)
    {
        if(c[i]>max)
        {
            max = c[i];
            j = i;
        }
    }
  /*  for(int i=0;i<27;i++)
    {
        printf("%d ",c[i]);
    }*/
    //printf("%d",j+97);
    printf("maximum occurrence of letter is %c",(j+97));
    return 0;
}
