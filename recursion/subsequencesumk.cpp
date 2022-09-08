#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&v,vector<int>ans,int i,int sum,int k)
{
    if(i>=v.size())
    {
        if(sum==k)
        {
            for(auto i:ans)
            {
                cout<<i<<" ";

            }
            cout<<endl;
        }
        return;
       
    }
    ans.push_back(v[i]);
    sum+=v[i];
    solve(v,ans,i+1,sum,k);
    ans.pop_back();
    sum=sum-v[i];
    solve(v,ans,i+1,sum,k);

}
int main()
{
    vector<int>v;
    int n,in,k;
    cin>>n>>k;

    for(int i=0;i<n;i++)
    {
        cin>>in;
        v.push_back(in);
    }
    vector<int>ans;

    solve(v,ans,0,0,k);


}