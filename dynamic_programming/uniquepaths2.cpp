#include<bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>>&mat,vector<vector<int>>&dp,int i,int j)
{
   if(i>=0 && j>=0 && mat[i][j]==1)
   { 
    dp[i][j]=0;
   }
   if(i==0 && j==0)
   {
    return 1;
   }
   if(i<0 || j<0)
   {
    return 0;
   }
   int up=solve(mat,dp,i-1,j);
   int left=solve(mat,dp,i,j-1);

   return dp[i][j]=up+left;

    
}

int main()
{
    int m,n,in;
    cin>>m>>n;

    vector<vector<int>>mat;
    vector<int>v;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>in;
            v.push_back(in);
        }
        mat.push_back(v);
        v.clear();
    }
    vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
    
    cout<<solve(mat,dp,m-1,n-1)<<endl;
}