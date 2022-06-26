#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;
//Time Complexity = O(n)
int kadane(vector<int>&v)
{
    int max_sum=v[0];
    int cur_Sum=v[0];

    for(int i=1;i<v.size();i++)
    {
        cur_Sum=max(v[i],cur_Sum+v[i]);
        max_sum=max(cur_Sum,max_sum);
    }

    return max_sum;


}

int main()
{
int n,in;
cin>>n;
vector<int>v;

for(int i=0;i<n;i++)
{
cin>>in;
v.push_back(in);
}
cout<<kadane(v)<<endl;

}