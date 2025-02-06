//724.Find pivot index
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, x=-1;
    cin >> n;
    vector<int> nums;
    for(int i=0; i<n; i++)
    {
        cin >> p;
        nums.push_back(p);
    }

    //vector<int> sum;
    //sum.push_back(nums[0]);
    int leftsum = 0,sum = 0;
    for(int i=0; i<nums.size(); i++)
    {
        sum = sum + nums[i];
    }
    //cout << sum << endl;
    for(int i=0; i<nums.size(); i++)
    {
        if(leftsum == sum-leftsum-nums[i]){
            x = i;
            break;
        }
        leftsum = leftsum+nums[i];
    }
    cout << x << endl;

}
//1480.Running sum of 1D array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, p;
    cin >> n;
    vector<int> nums;
    for(int i=0; i<n; i++)
    {
        cin >> p;
        nums.push_back(p);
    }

    vector<int> sum;
    sum.push_back(nums[0]);
    for(int i=1; i<nums.size(); i++)
    {
        int x = sum[i-1]+nums[i];
        sum.push_back(x);
    }

    for(int i=0; i<sum.size(); i++)
    {
        cout << sum[i] << " ";
    }

}
//1991.find mid index
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, x=-1;
    cin >> n;
    vector<int> nums;
    for(int i=0; i<n; i++)
    {
        cin >> p;
        nums.push_back(p);
    }

    //vector<int> sum;
    //sum.push_back(nums[0]);
    int leftsum = 0,sum = 0;
    for(int i=0; i<nums.size(); i++)
    {
        sum = sum + nums[i];
    }
    //cout << sum << endl;
    for(int i=0; i<nums.size(); i++)
    {
        if(leftsum == sum-leftsum-nums[i]){
            x = i;
            break;
        }
        leftsum = leftsum+nums[i];
    }
    cout << x << endl;

}
