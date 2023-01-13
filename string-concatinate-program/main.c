
#include <stdio.h>
#include <string.h>
int main()
{
    char a[] = {"hello"};
    char b[100] = {"hi "};
    strcat(b,a);
    printf("%s",b);
    return 0;
}
