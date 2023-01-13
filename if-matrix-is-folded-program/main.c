#include <stdio.h>
int right(int n,int a[][n])
{
    int flag =0;
    for(int i=0;i<n;i++)
    {
        if(a[i][n-1] != 0)
        {
            flag =1;
            break;
        }
    }
    return flag;
}
int left(int n,int a[][n])
{
    int flag =0;
    for(int i=0;i<n;i++)
    {
        if(a[i][0] != 0)
        {
            flag =1;
            break;
        }
    }
    return flag;
}
int top(int n,int a[][n])
{
    int flag =0;
    for(int i=0;i<n;i++)
    {
        if(a[0][i] != 0)
        {
            flag =1;
            break;
        }
    }
    return flag;
}
int bottom(int n,int a[][n])
{
    int flag =0;
    for(int i=0;i<n;i++)
    {
        if(a[n-1][i] != 0)
        {
            flag =1;
            break;
        }
    }
    return flag;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    if(right(n,a) == 0)
    printf("folded\nright");
        else
        {
            if(left(n,a)==0)
            printf("folded\nleft");
            else
            {
                if(top(n,a)==0)
                printf("folded\ntop");
                else
                {
                    if(bottom(n,a)==0)
                    printf("folded\nbottom");
                    else
                    {
                        printf("not folded");
                    }
                }
            }
        }
    
    return 0;
}
