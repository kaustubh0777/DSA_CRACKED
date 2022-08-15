#include<bits/stdc++.h>
using namespace std;

//Maximum sum in an array if we pick  nonadjacent elements in the array
//Time Complexity =O(N)

int solve(int ind,vector<int>&v,vector<int>&dp)
{
    if(ind==0)//its will only occur when you are calling ind-2 i., f(2-2)=f(0);
    {
        return v[ind];
    }
    if(ind<0)//if you reach out of bounds
    {
        return 0;
    }
    if(dp[ind]!=-1)
    {
        return dp[ind];
    }

    int pick=v[ind]+solve(ind-2,v,dp);//pick the element
    int not_pick=0+solve(ind-1,v,dp);//not pick

    return dp[ind]=max(pick,not_pick);
}

int main()
{
    vector<int>v;
    int n,in;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>in;
        v.push_back(in);
    }
    vector<int>dp(n+1,-1);
    cout<<solve(n-1,v,dp)<<endl;
}