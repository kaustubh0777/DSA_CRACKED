#include<bits/stdc++.h>
using namespace std;

int knapsack(int i,vector<int>&v,vector<int>&wt,int w,vector<vector<int>>&dp)
{
    if(i==0)
    {
        if((wt[i])<=w)
        {
            return v[i];
        }
        else
        {
            return 0;
        }

    }
    if(dp[i][w]!=-1)
    {
        return dp[i][w];
    }

    int nottake=0+knapsack(i-1,v,wt,w,dp);
    int take=INT_MIN;
    if(wt[i]<=w)
    {
        take=v[i]+knapsack(i-1,v,wt,w-wt[i],dp);
    }

    return dp[i][w]=max(take,nottake);


    
}

int main()
{
    int n,in,w;
    cin>>n>>w;

    vector<int>v;
    vector<int>wt;

    for(int i=0;i<n;i++)
    {
        cin>>in;
        v.push_back(in);
    }
    for(int i=0;i<n;i++)
    {
        cin>>in;
        wt.push_back(in);
    }
    // vector<vector<int,int>>dp(n,vector<int>(w+1,0));
    vector<vector<int>> dp(n,vector<int>(w+1,-1));

    cout<<knapsack(n-1,v,wt,w,dp)<<endl    ;




}