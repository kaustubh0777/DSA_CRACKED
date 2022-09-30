#include<bits/stdc++.h>
using namespace std;

int minimumcoins(int i,vector<int>&v,int x,vector<vector<int>>dp)
{
    if(i==0)
    {
        if(x%v[i]==0)
        {
            return (x/v[i]);
        }
        return 1e9;
    }
    if(dp[i][x]!=-1)
    {
        return dp[i][x];
    }
    int nottake=0+minimumcoins(i-1,v,x,dp);
    int take=INT_MAX;
    if(v[i]<=x)
    {
        take=1+minimumcoins(i,v,x-v[i],dp);
    }
    return dp[i][x]=min(take,nottake);
}

int main()
{
    int n,in,x;
    cin>>n>>x;

    vector<int>v;

    for(int i=0;i<n;i++)
    {
        cin>>in;
        v.push_back(in);
    }
    vector<vector<int>>dp(n,vector<int>(x+1,-1));
    int ans =  minimumcoins(n-1,v,x,dp);
    if(ans>=1e9)
    {
        cout<<-1<<endl;
    }
    else{
        cout<<minimumcoins(n-1,v,x,dp)<<endl;
    }

}