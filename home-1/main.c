#include <math.h>
#include <stdio.h>
void square(float s);//defining function fo area of square
void rectangle(float l, float b); // defining function for area of rectangle
void circle(float r) ;
int main()
{
    float r,l,b,s;
    printf("please enter the radius of circle : ");
    scanf("%f",&r);
    circle(r);
    printf("\nplease enter the side of square : ");
    scanf("%f",&s);
    square(s);
    printf("\nplease enter length and breadth of rectangle : ");
    scanf("%f,%f",&l,&b);
    rectangle(l,b);
    
    

    return 0;
}
void circle(float r){
    printf("area of circle is %f",3.14*r*r);
}
void rectangle(float l, float b){
    printf("area of rectangle %f",l*b);
}
void square(float s){
    printf("area of square is %f",s*s);
}
