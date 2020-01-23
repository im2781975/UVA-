#include<stdio.h>
int main()
{

    int x, y, temp, i, j, ans, sum;
    while(scanf("%d %d",&x, &y)==2 && x>0 &&y>0)
    {

        sum=0;
        printf("%d %d", x,y);
        if(x>y){
            temp=y;
            y=x;
            x=temp;
        }
    for(i=x;i<=y;i++)
    {
        ans=1;
        for(j=i;j!=1;j=j)
        {
            if(j%2==0)
                j=j/2;
            else
                j=3*j+1;
            ans=ans+1;
        }
        if(ans>=sum)
            sum=ans;
    }
    printf("%d\n",sum);
    }
    return 0;
}
