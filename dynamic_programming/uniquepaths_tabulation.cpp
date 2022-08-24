#include<bits/stdc++.h>
using namespace std;


// taulation approach for total unique patsh problem
int main()
{
    int m,n;
    cin>>m>>n;
    vector<vector<int>>dp(m+1,vector<int>(n+1,-1));

    int up,left;

    dp[0][0]=1;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 && j==0)
            {
                dp[0][0]=1;
            }
            else{
                up=0,left=0;

                if(i>0)
                {
                up=dp[i-1][j];
                }
                if(j>0)
                {
                left=dp[i][j-1];
                }

                dp[i][j]=up+left;
            }

        }
    }
    cout<<dp[m-1][n-1]<<endl;

}