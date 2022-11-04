#include<bits/stdc++.h>
using namespace std;

int  main()
{
    int n,m,in;
    cin>>n>>m;

    vector<vector<int>>v;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>in;
            a.push_back(in);
        }
        v.push_back(a);
        a.clear();
    }
    vector<int>d1(m,0);
    vector<int>d2(n,0);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(v[i][j]==0)
            {
                d1[j]=-1;
                d2[i]=-1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(d1[j]==-1 || d2[i]==0)
            {
                v[i][j]=0;

            }
        }
    }

    for(auto i:v)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}