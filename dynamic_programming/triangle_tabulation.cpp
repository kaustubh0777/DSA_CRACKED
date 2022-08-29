#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int main()
{
    vector<vector<int>>ans;
    ans={{2},{3,4},{6,5,7},{4,1,8,3}};
    int n=ans.size();

    vector<vector<int>>dp(n,vector<int>(n,0));
    
    
    
    for(int j=0;j<n;j++)
    {
        dp[n-1][j]=ans[n-1][j];
    }
        for(int i=n-2;i>=0;i--)
        {
            for(int j=i;j>=0;j--)
            {
            int d=ans[i][j]+dp[i+1][j];
            int diag=ans[i][j]+dp[i+1][j+1];
            dp[i][j]=min(d,diag);
            }
        }
    
    cout<<dp[0][0]<<endl;
}