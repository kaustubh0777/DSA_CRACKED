/*
Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right, which minimizes the sum of all numbers along its path.

Note: You can only move either down or right at any point in time.
*/

#include<bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>>&mat,vector<vector<int>>&dp,int i,int j)
{
    if(i==0 && j==0)//once we reach ourdestination
    {
        return mat[i][j];
    }
    if(i<0 || j<0) //if we go out of the matrix
    {
        return INT_MAX;
    }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        
    int val=min(solve(mat,dp,i-1,j),solve(mat,dp,i,j-1));
    if(val!=INT_MAX)
    {
        val=mat[i][j]+val;
    }
    else
    {
        val=mat[i][j];
    }
            

    return dp[i][j]=val;

}

int main()
{
    vector<vector<int>>mat;
    vector<int>v;

    int m,n,in;
    cin>>m>>n;

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
    vector<vector<int>>dp(m,vector<int>(n,-1));
    cout<<solve(mat,dp,m-1,n-1)<<endl;



}