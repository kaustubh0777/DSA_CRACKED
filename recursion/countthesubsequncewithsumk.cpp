#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int solve(vector<int>&v,vector<int>ans,int i,int s,int k)
{
    if(i>=v.size())
    {
        s=0;
        if(!ans.empty())
        {
        int maxi=*max_element(ans.begin(),ans.end());
        int mini=*min_element(ans.begin(),ans.end());
        s=maxi+mini;
        if(s<=k)
        {
           return 1;
        }
        }
        return 0;
    }
    ans.push_back(v[i]);
    s+=v[i];
    int l=solve(v,ans,i+1,s,k);
    ans.pop_back();
    s-=v[i];
    int r=solve(v,ans,i+1,s,k);
    
    
    return l+r;

}
    int numSubseq(vector<int>&v, int k) 
    {
    vector<int>ans;
    return solve(v,ans,0,0,k);
        
    }

int main()
{
    int n,in,k;
    cin>>n>>k;
    vector<int>v;
    
    for(int i=0;i<n;i++)
    {
    cin>>in;
    v.push_back(in);
    }
    cout<<numSubseq(v,k)<<endl;

}