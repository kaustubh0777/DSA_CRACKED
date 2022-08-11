#include<bits/stdc++.h>
using namespace std;

//using dynamic programming approach-Memoization

int solve(vector<int>&heights,int ind,vector<int>&dp)
{
    if(ind==0)
    {
        return 0;
    }
    if(dp[ind]!=-1)
    {
        return dp[ind];
    }
    int jump2=INT_MAX;
    int jump1=solve(heights,ind-1,dp)+abs(heights[ind]-heights[ind-1]);

    if(ind>1)
    jump2=solve(heights,ind-2,dp)+abs(heights[ind]-heights[ind-2]);
    
   
    return dp[ind]=min(jump1,jump2);

}

int main()
{
    vector<int>heights;
    int n,in;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>in;
        heights.push_back(in);
    }
    vector<int>dp(n+1,-1);
    int ind=0;
    cout<<solve(heights,n-1,dp)<<endl;
}