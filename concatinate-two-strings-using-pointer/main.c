
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
    
    int l = strlen(p);
    int j=0;
    for(int i=strlen(s);i<strlen(s)+l;i++,j++)
    {
        *(s+i) = *(p+j);
    }
    printf("%s",s);
    return 0;
}
