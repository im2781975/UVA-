#include<stdio.h>
int main()
{
    int T,k,p,sum,n,ans,i;
    scanf("%d",&T);
    for(i=1; i<=T; i++){
        scanf("%d%d%d",&n,&k,&p);
        sum=k+p;
        if(sum>n){
        ans=sum%n;
            if(ans==0){
                ans=n;
            }
        }
        else{
            ans=sum;
        }
        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}
