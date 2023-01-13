
#include <stdio.h>

int main()
{
    int r,c;
    printf("please enter the space seperated no of rows and columns of array ");
    scanf("%d %d",&r,&c);
    printf("\n");
    int a[r][c],b[r][c];
    printf("please enter the elements of the matrix\n");
    for(int i=0;i<r;i++)
    {
        for(int j = 0;j<c;j++)
        {
            scanf("%d",(*(b+i)+j));
        }
    }
    printf("please enter the elements of second matrix \n");
     for(int i=0;i<r;i++)
    {
        for(int j = 0;j<c;j++)
        {
            scanf("%d",(*(a+i)+j));
        }
    }
 /*   printf("%d\n ",*(*(a+0)+0));
    printf("%d\n ",*(*(b+0)+0));
    printf("%d\n ",*(*(a+0)+0)+*(*(b+0)+0));*/
    printf("\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",(*(*(a+i)+j))+(*(*(b+i)+j)));
        }
        printf("\n");
    }
    return 0;
}

