#include<math.h>
#include <stdio.h>

int main()
{
    float a; // side of equilateral triangle
    printf("please enter side of your equilateral triangle : ");
    scanf("%f",&a);
    printf("area of your traiangle is %f",sqrt(3)*pow(a,2)/4);

    return 0;
}
