#include <stdio.h>
int main()
{
    int t,num;

    scanf("%d",&t);
    while(t--){
    scanf("%d",&num);
    num=num*63;
    num=num+7492;
    num=num*5;
    num=num-498;
    num=num/10;
    num=num%10;
    if(num>=0)
    printf("%d\n",num);
    else
    printf("%d\n",-num);
    }
    return 0;
}
