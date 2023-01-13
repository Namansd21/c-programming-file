
#include <stdio.h>
int sort(int a[],int n);
int del(int a[],int ele,int n);
int copy(int a[],int n,int b[]);
int cutter(int b[],int n);
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    copy(a,n,b);
    int c=0;
    sort(a,n);
    sort(b,n);
    for(int i =0;i<n;i++)
    {
        if(b[i] == b[i+1])
        del(b,i+1,n);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    c =cutter(b,n);
   // printf("%d",c);
    int l[c];
    int d;
    int f=0;
    for(int i=0;i<c;i++)
    {
        if(a[i] == b[f]){
        d++;
        del(a,a[i],n);}
        else{
        l[f] =d;
        d=0;
        f++;}
        
    }
   /* for(int i=0;i<c;i++)
    {
        printf("%d",l[i]);
    }*/
    
    return 0;
}
int sort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                a[j]= a[j]^a[j+1];
                a[j+1]= a[j]^a[j+1];
                a[j]= a[j]^a[j+1];
            }
        }
    }
    return 0;
}
int del(int a[],int j,int n)
{
    int c = n;
    for(int i=j+1;i<n;i++)
    {
        a[i-1] = a[i];
        c--;
        a[n] = a[c];
    }
    return 0;
}
int copy(int a[],int n,int b[])
{
    for(int i=0;i<n;i++)
    {
        b[i] = a[i];
    }
    return 0;
}
int cutter(int b[],int n){
    int a=0;
    for(int i=n-1;i>=0;i--)
    {
        if(b[i]==0)
        a++;
    }
    return n-a;
    
}