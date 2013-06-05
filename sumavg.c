// Enter three number then calculate its avg 
#include<stdio.h>
main()
{int a,b,c,sum;
 float avg;
 printf("Enter the three number : ");
 scanf("%d %d %d",&a,&b,&c);
 sum=a+b+c;
 avg=(float)sum/3;
 printf("Result : \nSum = %d \nAvg = %f",sum,avg);
}
