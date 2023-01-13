#include<math.h>
#include <stdio.h>

int main()
{
    int n = 1;
    while(n){
        float a,b;
        int f;
        char i;
        printf("please enter two numbers with operators \n");
        scanf("%f %c %f",&a,&i,&b);
        float c,d;
        c = a;
        d = b;
        //printf("please enter an operator from given choice +,-,*,/,%\n");
        //scanf("%c",&i);
        f = i ;
        switch(f){
            case '+' : printf("%f\n",c+d);break;
            case '-' : printf("%f\n",c-d);break;
            case '*' : printf("%f\n",c*d);break;
            case '/' : printf("%f\n",c/d);break;
            case '%' : printf("%f\n",fmod(c,d));break;
        }
        printf("please enter if you want to use calculator 1 or 0\n");
        scanf("%d",&n);
    }

    return 0;
}
