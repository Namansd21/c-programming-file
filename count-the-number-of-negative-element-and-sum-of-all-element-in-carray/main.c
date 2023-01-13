
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int sum =0;
    int count =0;
    for(int i=0;i<n;i++)
    {
        sum = sum + a[i];
        if(a[i]<0)
        count = count +1;
    }
    printf("sum is %d\ncount of negative numbers are %d",sum,count);

    return 0;
}
