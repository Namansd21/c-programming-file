
#include <stdio.h>
#include <string.h>
int main()
{
   char a[] = {"hello"};
   char b[] = {"hi"};
   int d = strcmp(a,b);
   if(d==0)
   {
       printf("both are equal");
   }
   else if(d>0)
   printf("a>b");
   else
   printf("b>a");
    return 0;
}
