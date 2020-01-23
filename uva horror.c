#include<stdio.h>
int main()
{
 int t, max, n, j, i=0, a;
 scanf("%d", &t);
 while(t--)
 {
 max=0;
 scanf("%d", &n);
 for(j=1; j<=n; j++){
 scanf("%d", &a);
 if(a>max)
 max=a;
 }
 printf("case %d: %d\n", ++i, max);
 }
 return 0;
 }
