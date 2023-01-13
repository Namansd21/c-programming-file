#include<stdio.h>
#include<math.h>
int main(){
    
    int n,b,c;
    scanf("%d %d",&n,&b);
    c= 1<<b|n;
    printf("%d",c);
    return 0;
}