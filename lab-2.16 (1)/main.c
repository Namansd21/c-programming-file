
#include <stdio.h>

int main()
{
    float p ;
    float r ;
    float t ;
    printf("please enter principal amount : ");
    scanf("%f",&p);
    printf("please enter rate: ");
    scanf("%f",&r);

printf("please enter time in years : ");
    scanf("%f",&t);
    printf("your simple intrest is %f",p*r*t/100);


    return 0;
}

