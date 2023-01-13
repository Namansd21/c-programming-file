
#include <stdio.h>

int main()
{
    int *p ;
    int *r;
    int d,a;
    printf("please enter you r numbers space seperated ");
    scanf("%d %d",&d,&a);
    p = &a;
    r = &d;
    printf("%d",*p+*r);

    return 0;
}
