/*
print only one subsequence with sum equal to k
*/
#include<bits/stdc++.h>
using namespace std;

bool solve(vector<int>&v,vector<int>ans,int i,int s,int k)
{
    if(i>=v.size())
    {
        if(s==k)
        {
            for(auto i:ans)
            {
                cout<<i<<" ";
            }
            cout<<endl;
            return true;
        }
        return false;
    }
    ans.push_back(v[i]);
    s+=v[i];
    if(solve(v,ans,i+1,s,k)==true)
    {
        return true;
    }
    ans.pop_back();
    s-=v[i];
    if(solve(v,ans,i+1,s,k)==true)
    {
        return true;
    }
    return false;

}
int main()
{
    vector<int>v;
    int n,k,in;
    cin>>n>>k;

    for(int i=0;i<n;i++)
    {
        cin>>in;
        v.push_back(in);
    }
    vector<int>ans;
    solve(v,ans,0,0,k);
}