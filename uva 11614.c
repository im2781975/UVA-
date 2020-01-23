#include<stdio.h>
#include<math.h>
int main()
{
    double s,s1;
    long long int n,test;
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lf",&s);
        s1=(-1 + sqrt(1+(8*s)))/2;
        n=(long long)(s1);
        printf("%lld\n",n);
    }

}
