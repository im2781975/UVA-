#include<stdio.h>
#include<math.h>
int main()
{
   double u, v, s, t, a;
   int i=0, n;
   while(scanf("%d",&n)==1 && n!=0)
   {
       s=0,v=0,u=0,t=0,a=0;

       if(n==1)
       {
       scanf("%lf %lf %lf", &u, &v, &t);
       s=(u+v)*t/2;
       a=(v-u)/t;
       printf("Case %d: %0.3lf %0.3lf\n", ++i, s, a);
       }
       else if(n==2){

        scanf("%lf %lf %lf", &u, &v, &a);
        t=(v-u)/a;
        s=t*(u+v)/2;
       printf("Case %d: %0.3lf %0.3lf\n", ++i, s, t);
       }
       else if(n==3)
       {
       scanf("%lf %lf %lf", &u, &a, &s);
       v=sqrt(u*u+2*a*s);
       t=(v-u)/a;
       printf("Case %d: %0.3lf %0.3lf\n", ++i, v, t);
       }
       else if(n==4)
       {
       scanf("%lf %lf %lf", &v, &a, &s);
       u = sqrt(v*v - 2*a*s);
              t=(v-u)/a;
       printf("Case %d: %0.3lf %0.3lf\n", ++i, u, t);
       }
       }
       return 0;
       }
