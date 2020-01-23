#include<stdio.h>
int main()
{
    int a[13],t, i,ck,j=1;
    scanf("%d", &t);
    while(t--)
    {
        ck=0;


        for(i=0;i<13;i++)
             scanf("%d", &a[i]);
             for(i=0;i<13;i++)
             {
                 if(a[i]==0){
                     ck=1;
                     break;
                     }
              }
               if(ck==1)
                    printf("Set #%d: No\n",j);
                    else
                    printf("Set #%d: Yes\n",j);
                    j++;
                    }
                    return 0;
                    }
