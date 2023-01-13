
#include <stdio.h>
#include <string.h>
int main()
{
    char s[500],p[500];
    printf("please enter first string\n");
    scanf("%[^\n]",s);
    
    printf("please enter the second string\n");
    scanf("\n");
    scanf("%[^\n]",p);
    
    int max =0;
   if(strlen(s)>strlen(p))
    max = strlen(s);
   else
   max =strlen(p);
   int flag =1;
    for(int i=0;i<max;i++)
    {
        if(*(s+i)!=*(p+i))
        {
            if(*(s+i)>*(p+i))
            {
                printf("the string %s is bigger",s);
                flag =0;
                break;
            }
        }
        if(flag ==0)
        break;
    }
    if(flag ==1)
    printf("both are equal\n");
    return 0;
}
