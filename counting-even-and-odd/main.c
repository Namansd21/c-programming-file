
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int even=0,odd=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2 == 0)
        even++;
    }
    for(int i=0;i<n;i++){
        if(a[i]%2!=0)
        odd++;
        
    }
    printf("number of even numbr is %d\nnumber of odd num ber is %d",even,odd);

    return 0;
}
