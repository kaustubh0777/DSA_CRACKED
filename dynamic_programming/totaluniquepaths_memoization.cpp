// given an mxn grid your goal is to count the total no of ways to reach 0,0 from  (m-1,n-1) 
#include<bits/stdc++.h>
using namespace std;

int solve(int i,int j,vector<vector<int>>&dp)
{
    
    if(i==0 && j==0)
    {
        return 1;
    }
    if(i<0 || j<0)
    {
        return 0;
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }

    int up=solve(i-1,j,dp);// on moving upwards row reduces
    int left=solve(i,j-1,dp); //on moving downwards column reduces

    return dp[i][j]=up+left;


}
int main()
{
    int m,n;
    cin>>m>>n;

    vector<vector<int>>dp(m+1,vector<int>(n+1,-1));

    cout<<solve(m-1,n-1,dp)<<endl;




}