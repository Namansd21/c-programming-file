
#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    float b;
    printf("please enter divisor : ");
    scanf("%f",&a);
    printf("please enter dividend : ");
    scanf("%f",&b);
    printf("quotient of division is %f",b/a);
    printf("\nremainder of division is %f",fmod(b,a));
    

    return 0;
}
