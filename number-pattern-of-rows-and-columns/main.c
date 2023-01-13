#include<stdio.h>
#include<math.h>
int main(){
    int n,c,num = 0;
    scanf("%d %d",&n,&c);
    for(int i =1;i<=n;i++){
        for(int j  =1;j<=c;j++){
             num++;
            printf("%d\t",num);
           
        }
        printf("\n");
    }
    return 0;
}