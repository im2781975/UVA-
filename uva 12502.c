#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, t, ans;
    scanf("%d", &t);
    while(t--)
    {
        ans=0;
        scanf("%d %d %d", &a,&b, &c);
        ans=c*(a+(a-b))/(a+b);
        if(ans<=0)
        printf("0\n");
        else
        printf("%d\n", ans);
        }
        return 0;
        }
