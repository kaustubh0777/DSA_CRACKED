#include<bits/stdc++.h>
using namespace std;

//using memoization - store the results such that we dont have to compute it many times
int fib(int n,vector<int>&dp)
{
    if(n<=1)
    {
        return n;
    }
    else if(dp[n]!=-1)
    {
        return dp[n];
    }
    
    return dp[n]=fib(n-1,dp)+fib(n-2,dp);
}
//0 1 1 2 3 5 8 13 21
int main()
{
    int n;
    cin>>n;

    vector<int>dp(n+1,-1);
    cout<<fib(n,dp)<<endl;
}