#include<bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>>&mat,int i,int j,vector<vector<int>>&dp)
{
   if(j<0 || j>=mat[i].size()) //if the column becomes negative,or crosses the right boundary
   {
    return INT_MIN;
   }
   if(i==0)
   {
    return mat[0][j]; //if it reaches the first row add the corresponding element from the jth column 
   }
   if(dp[i][j]!=-1)
   {
    return dp[i][j];
   }
   int u=mat[i][j]+solve(mat,i-1,j,dp); //up
   int ld=mat[i][j]+solve(mat,i-1,j-1,dp);//left diagonal
   int rd=mat[i][j]+solve(mat,i-1,j+1,dp); //right diagonal

   return dp[i][j]=max(u,max(ld,rd));  //maximum sum of left and right diagonal

}
int main()
{
    int m,n,in;
    cin>>m>>n;

    vector<vector<int>>mat;
    vector<int>v;

    // create an matrix

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
    int maxi=INT_MIN;

    vector<vector<int>>dp(m,vector<int>(n,-1));

    for(int j=0;j<n;j++)
    {
        maxi=max(maxi,solve(mat,n-1,j,dp));
    }
    cout<<maxi<<endl;
}