#include<stdio.h>
int main()
{
long long year;
int c;
while(scanf("%ld",&year)==1)
{
if(year>=2000)
{
c=0;
if(year%4==0 || year%400==0 || year%55==0)
{
printf("This is leap year");
c++;
}
if(year%15==0)
{
if(c==1)
printf("\nThis is huluculu festival year");
else
printf("This is huluculu festival year");
c++;
}
if(year%55==0)
{
if(c>0)
printf("\nThis is buluculu festival year");
else
printf("This is buluculu festival year");
c++;
}
if(c==0)
printf("This is an ordinary year");
printf("\n\n");
}
}
return 0;
}
