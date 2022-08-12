#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&h,vector<int>&dp,int ind,int k)
{
    if(ind==0)
    {
        return 0;
    }
    if(dp[ind]!=-1)
    {
        return dp[ind];
    }
   int minsteps=INT_MAX;
   for(int j=1;j<=k;j++)
   {
    if(ind-j>=0)
    {
    int fs=solve(h,dp,ind-j,k)+abs(h[ind]-h[ind-j]);
    minsteps=min(minsteps,fs);
    }
   }

   return dp[ind]=minsteps;

}
int main()
{
    int n,in,k;
    cin>>n>>k;

    vector<int>h;
    for(int i=0;i<n;i++)
    {
        cin>>in;
        h.push_back(in);

    }
    vector<int>dp(n,-1);

    cout<<solve(h,dp,n-1,k)<<endl;
}