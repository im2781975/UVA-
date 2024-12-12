/* the parity of an integer n as the sum of the bits in binary representation. the number 21 = (10101)2 has three 1s in its binary representation so it has parity 3(mod2), or 1.
->1 2 10 21 0
<- The parity of 1 is 1(mod2).
 The parity of 10 is 1(mod2). 
 The parity of 1010 is 2(mod2). 
 The parity of 10101 is 3(mod2).*/
#include <bits/stdc++.h>
#define PI 3.14159265359
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<vector<int> >
typedef long long ll;
using namespace std;
int main()
{
    int n, cnt, temp, it;
    bool a[35];
    while(1){
        scanf("%d", &n);
        if(!n) return 0;
        cnt = 0; temp = n; it = 0;
        while(temp){
            if(temp % 2) cnt++, a[it++] = 1;
            else a[it++] = 0;
            temp /= 2;
        }
        printf("The parity of ");
        for(int i=it-1; i>=0; i--) printf("%d", a[i]);
        printf(" is %d (mod 2).\n", cnt);
    }

}
