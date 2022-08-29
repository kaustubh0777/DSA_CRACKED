#include<bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>>&ans,int i,int j,int n,vector<vector<int>>&dp)
{
    if(i==n-1)
    {
        return ans[n-1][j];
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    
    int down=ans[i][j]+solve(ans,i+1,j,n,dp);//next row same column
    int diagonal=ans[i][j]+solve(ans,i+1,j+1,n,dp);//next row next column
    
    return dp[i][j]=min(down,diagonal);

}
int main()
{
    vector<vector<int>>ans;
    
    ans={{2},{3,4},{6,5,7},{4,1,8,3}};

    int n=ans.size();

    vector<vector<int>>dp(n,vector<int>(n,-1));
    
    cout<<solve(ans,0,0,n,dp)<<endl;

}