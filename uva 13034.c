#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,x,j,k,l,m,t;
    int i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,f,&g,&h,&x,&j,&k,&l,&m);
        if((a!=0)&& (b!=0)&&(c!=0)&&(d!=0)&&(e!=0)&&(f!=0)&&(g!=0)&&(h!=0)&&(x!=0)&&(j!=0)&&(k!=0)&&(l!=0)&&(m!=0))
            printf("Set #%d: Yes\n", i);
                else
                    printf("Set #%d: No\n", i);
                    }
                    return 0;
                    }
