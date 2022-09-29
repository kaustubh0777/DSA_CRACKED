#include<bits/stdc++.h>
using namespace std;

void minimumcoins(int i,vector<int>v,vector<int>ds,int x,int res)
{
    if(i==v.size())
    {
        if(x==0)
        {
            int p=ds.size();
            res=min(res,p);
        }
        return;
    }
    if(v[i]<=x)
    {
        ds.push_back(v[i]);
        minimumcoins(i+1,v,ds,x-v[i],res);
        ds.pop_back();

    }
    minimumcoins(i+1,v,ds,x,res);
}

int main()
{
    int n,in,x;
    cin>>n>>x;

    vector<int>v;

    for(int i=0;i<n;i++)
    {
        cin>>in;
        v.push_back(in);    
    }
    int res=INT_MAX;
    vector<int>ds;
    minimumcoins(0,v,ds,x,res);

}