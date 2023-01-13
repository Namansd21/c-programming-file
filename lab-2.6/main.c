#include <stdio.h>

int main()
{
    float r ;
    printf("please enter radius of your circle : ");
    scanf("%f",&r);
    printf("diameter of your circle is %f",2*r);
    printf("\ncircumfrence of your circle is %f",2*r*3.14);
    printf("\narea of your circle is %f",3.14*r*r);
 
    return 0;
}

