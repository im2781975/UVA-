#include<stdio.h>
#include<math.h>
int main()
{
double a,b,c,r,s,p;
while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
    if(a<=0 || b<=0 || c<=0){
    printf("The radius of the round table is: 0.000\n");
    continue;
    }
    else
        {
        s=(a+b+c)/2;
        r=(s-a)*(s-b)*(s-c)*s;
        p=sqrt(r)/s;
        printf("The radius of the round table is: %.3lf\n",p);
        }
    }
}
