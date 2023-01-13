
#include <stdio.h>
#include <limits.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        
        int max = 0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",a+i);
            if(a[i]>max)
            max = a[i];
        }
        int b[max + 1];
        b[0] = 0;
        for(int i=0;i<n;i++)
        {
            
            b[a[i]]++;
        }
        int count = 0;
        for(int i=0;i<max+1;i++)
        {
            if(b[i]!=0)
            count++;
        }
        printf("%d\n",count);
    }

    return 0;
}
