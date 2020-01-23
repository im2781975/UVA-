 #include<stdio.h>
int main()
{
     int a[10000], avr, b, n,j,i,t,sum;
     float ans;
     while(scanf("%d", &t)!=EOF)
          {

               for(j=0; j<t;j++)
               {

                    b=0;
                    sum=0;
                    scanf("%d", &n);
                    for(i=0;i<n;i++)
                         sum=sum+a[i];
                    avr=sum/n;
                    for(i=0;i<n;i++)
                         if(a[i]>avr)
                         b=b+1;
                    ans=((float)b/(float)n);
                    printf("%0.3f%\n", ans*100);

               }
          }
          return 0;
     }
