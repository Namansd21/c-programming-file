
#include <stdio.h>

int main()
{
   int years;
   int months;
   int days ;
   int d ;
   int a;
   printf("please enter no of days : ");
   scanf("%d",&days);
   years = days/365;
   a = days%365;
   months = a/30;
   d = a%30;
   printf("\nyour days are %d years %d months and %d days",years,months,d);

    return 0;
}

