#include<bits/stdc++.h>
using namespace std;

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

    // tabulation begins

    vector<vector<int>>dp(m,vector<int>(n,-1));
    // int up,left;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 && j==0)
            {
                dp[i][j]=mat[i][j];
            }
            else{
                int up=mat[i][j];
                if(i>0)
                {
                up+=dp[i-1][j];
                }
                else{
                    up+=1e9;
                }
                int left=mat[i][j];

                if(j>0)
                {
                left+=dp[i][j-1];
                }
                else{
                    left+=1e9;
                }
                dp[i][j]=min(up,left);
            }

        }
    }
    cout<<dp[m-1][n-1]<<endl;
}