#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>&v,vector<vector<int>>&dp,int i,int k)
{
    if(k==0) //if the elements sum upto target  or target becomes 0 
    {
        return true;
    }
    if(i==0)
    {
        return (v[0]==k);
    }
    if(dp[i][k]!=-1)
    {
        return dp[i][k];
    }

    bool nottake=check(v,dp,i-1,k);//move to i-1th index without considering the v[i]
    bool take=false;

    if(v[i]<=k)
    {
        take=check(v,dp,i-1,k-v[i]);//considering the v[i] element and subtracting it from k and moving to next index
    }

    return dp[i][k]=(take || nottake);
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
    vector<vector<int>>dp(n,vector<int>(k+1,-1));

    if(check(v,dp,n-1,k))
    {
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }



}