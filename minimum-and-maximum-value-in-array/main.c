
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=0,min=0;
    max = a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        max = a[i];
    }
    min = max;
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        min = a[i];
    }
    printf("maximum value is %d\nminimum value is %d",max,min);
    return 0;
}
