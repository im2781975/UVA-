#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[1000];

    while(gets(s))
    {

        int i, j, k, l;
        k=0;
        for(i=0; i<strlen(s); i++)
        {
            //cout<<s[i]<<" ";
            if(i == strlen(s)-1)
            {
                for(j=i; j>=k; j--)
                {
                    cout<< s[j];
                }
            }

            if(s[i] == ' ' )
            {

                for(j=i-1; j>=k; j--)
                {
                    cout<< s[j];
                }
            cout<<" ";
            k=i+1;
            }
        }
        cout<<endl;
    }
    return 0;
}
