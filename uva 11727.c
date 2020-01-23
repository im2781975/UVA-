#include<stdio.h>
int main()
{
    int a,b,c,t,i=0,ans;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d %d", &a , &b, &c);
        if(a>b&& b>c|| a<b && b<c)
        ans=b;
        if( a>c && c>b || a<c && a<c && c<b)
        ans =c;
        if (b>a && a>c || b<a && c>a)
        ans =a;
        printf("Case %d: %d\n", ++i, ans);
        }
        return 0;
    }
