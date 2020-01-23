#include<bits/stdc++.h>
using namespace std;
#define uint unsigned long long int
int main()
{
    uint N;
    while(scanf("%llu", &N)!=EOF)
    {

        uint row=ceil((sqrt(1+8*N)-1)/2);
        uint S=((row-1)*row)/2;

        uint y=1, x=row;

        uint div=N-(S+1);
        x=x-div;
        y=y+div;

            cout<<x<<"/"<<y<<endl;
    }
}
