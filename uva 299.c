#include<stdio.h>
int main()
{
    int i, j, t, n, b,a[100], c;
    scanf("%d", &t);
    while(t--)
    {
        c=0;
        scanf("%d", &n);
        for(i=0; i<n; i++)
        scanf("%d", &a[i]);
        for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){

        if(a[i]>a[j])
        {
         b=a[i];
         a[i]=a[j];
         a[j]=b;
         c++;
         }
        }
        }
         printf("Optimal train swapping takes %d swaps.\n",c);
         }
         return 0;
         }
