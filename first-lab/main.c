#include <stdio.h>

void main()
{    
    float p,r;
    int t ;
    printf("please enter principal amount\n");
    scanf("%f",&p);
    printf("please enter rate\n");
    scanf("%f",&r);
    printf("please enter time in years\n");
    scanf("%d",&t);
    printf("si is %f",p*r*t/100);
    
    float radi ;
    printf("\nplease enter radius of circle\n");
    scanf("%f",&radi);
    printf("area of circle is %f",3.14 *radi*radi);
}
