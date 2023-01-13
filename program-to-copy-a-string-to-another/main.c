
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s",a);
    char b[100];
    strcpy(b,a);
    printf("%s",b);

    return 0;
}
