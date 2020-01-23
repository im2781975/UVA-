#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum, i;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(scanf("%d", &n)!= EOF){
        if(n==0) {
            cout<<"END OF OUTPUT"<<endl;
            return 0;

        }
        sum=0;
        for(i=1; i<n; i++){
            if(n%i==0){
                sum=sum+i;

            }
        }
        if(sum==n)
            printf("%5d  PERFECT\n", n);
            else if(sum < n)
                printf("%5d  DEFICIENT\n", n);
            else
                printf("%5d  ABUNDANT\n", n);


}
return 0;
}
