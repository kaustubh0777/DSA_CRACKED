// Count the number of distinct ways in which you can climb the stairs

#include<bits/stdc++.h>
using namespace std;


int count(int n,vector<int>&dp)
{
    if(n==0)
    {
        return 1;
    }
    if(n==1)
    {
        return 1;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }

   return dp[n]=count(n-1,dp)+count(n-2,dp);
}
int main()
{
    int n;
    cin>>n;

    vector<int>dp(n+1,-1);

    cout<<count(n,dp)<<endl;
}