#include<stdio.h>
int main()
{
   int n,t, L[49], hj, lj, j, i=0;
   scanf("%d", &t);
   while(t--)
   {
   hj=0; lj=0;
   scanf("%d",&n);
   for(j=0; j<n; j++){
   scanf("%d", &L[j]);
   }
   for(j=0; j<n-1; j++)
   {
   if(L[j]<L[j+1])
   hj++;
   if(L[j]>L[j+1])
   lj++;
   }
   printf("Case %d: %d %d\n", ++i, hj,lj);
   }
   return 0;
   }
