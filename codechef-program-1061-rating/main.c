#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",a+i);
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(a[i]>a[i+1])
	            {
	                a[i] = a[i]^a[i+1];
	                a[i+1] = a[i]^a[i+1];
	                a[i] = a[i]^a[i+1];
	            }
	        }
	    }
	    int steps =0;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(a[i] == a[j]&&i!=j)
	            {
	                a[i]++;
	                steps++;
	            }
	        }
	    }
	    printf("%d\n",steps);
	}
	return 0;
}

