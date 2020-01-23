#include<stdio.h>
int R[100];
int main()
{
    int t, n, x, i, swap, possition, k=0;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        for(i=1; i<=n; i++){
            scanf("%d", &x);
            R[x]=i;
        }
            swap= 0;
            possition= -1;
            for(i=1; i<=n;i++){
                if(R[i]<possition){
                swap++;
                possition=n+1;
                }
                else
                    possition=R[i];
                    }
                     printf("Case %d: %d\n", ++k, swap);
                     }
                     return 0;
                     }
