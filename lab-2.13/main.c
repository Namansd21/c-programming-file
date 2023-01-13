
#include <stdio.h>

int main()
{
    float a ; // first angle
    float b; //second angle
    printf("please enter your first no : ");
    scanf("%f",&a);
    printf("please enter your second no : ");
    scanf("%f",&b);
    printf("the third angle is %f  degree ", 180-a-b);

    return 0;
}

