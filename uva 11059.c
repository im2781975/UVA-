#include<stdio.h>
#include<conio.h>
int main(){
int i,j,k,l;
long long int ar[100],n,max;
l=0;
while(scanf("\n%d",&n)==1){
j=0;
for(i=0;i<n;i++){
scanf("%d",&ar[i]);
j++;
}
max=1;
for(k=0;k<n;k++){
if(ar[k]>0){
max=max*ar[k];
}
}
if(max>0)printf("Case #%d: The maximum product is %d.\n\n",max);
if(max<=0)printf("Case #%d: The maximum product is 0.\n\n");
l++;
}
return 0;
}
