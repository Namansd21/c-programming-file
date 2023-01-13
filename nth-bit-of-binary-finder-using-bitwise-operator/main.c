#include<stdio.h>
#include<math.h>
int main(){
    int n,bit;
    scanf("%d %d",&n,&bit);// bit for bit n for number
    n = n >> (bit-1);
    if(n&1==1)
    printf("1");
    else
    printf("0");
    return 0;
}