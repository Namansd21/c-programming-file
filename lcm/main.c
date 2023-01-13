#include<stdio.h>
#include<math.h>
int main(){
   int n1,n2,h=1,c=0;
   scanf("%d %d",&n1,&n2);
   if(n1>n2)
   c =n1;
   else
   c =n2;
   h = n1*n2;
   for(int i =n1*n2;i>=c;i--){
       if(i%n1 == 0&&i%n2==0){
           if(i<h)
           h = i;
       }
   }
   printf("%d",h);
   return 0;
}