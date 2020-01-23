#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[1000001];
    set <int> S;
    int i,j,k,l,n,m,a,b;
    int tc = 1;
    int flag;
    while(scanf("%s",&s)==1)
    {
        l = strlen(s);
        if(l==0)
            break;
        scanf("%d",&n);
        printf("Case %d:\n",tc);
        for(i=0;i<n;i++)
        {
            flag = 0;
            scanf("%d %d",&a,&b);
            if(a>b)
                swap(a,b);
            for(j=a+1;j<=b;j++)
            {
                if(s[a]!=s[j])
                flag = 1;
            }

            if(flag == 0)
                printf("Yes\n");
            else printf("No\n");
        }
        tc++;
    }
}
