#include<stdio.h>
int main()
{
     long int i,s ,d ,sum;
     while(scanf("%ld %ld", &s, &d)!=EOF){
     sum=0;
     for(i=s; s>0;i++){
          sum=sum+i;
          if(sum>d||sum==d){
               printf("%ld\n", i);
               break;

          }
     }
     }
     return 0;
}
