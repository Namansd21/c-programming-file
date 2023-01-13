//msb set or not
#include<stdio.h>
#include<math.h>
int main(){
    int n,size=0;
    scanf("%d",&n);
    size =log2(n);
    n = n>>size;
    if(n&1==1)
    printf("1");
    else 
    printf("0");
    return 0;
}
