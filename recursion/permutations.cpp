#include<bits/stdc++.h>
using namespace std;

void permutationofstring(vector<vector<int>>&ans,vector<int>&v,vector<int>ds,vector<bool>&freq,int n)
{
    if(ds.size()==n)
    {
        ans.push_back(ds);
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(freq[i]==false)
        {
            ds.push_back(v[i]);
            freq[i]=true;//taken 
            permutationofstring(ans,v,ds,freq,n);
            ds.pop_back();
            freq[i]=false;//not take or poped out
            
        }
    }
    

}

int main()
{ 
    int n,in;
    cin>>n;

    vector<int>v;
    vector<bool>freq(n,false);

    for(int i=0;i<n;i++)
    {
        cin>>in;
        v.push_back(in);
    }

    vector<int>ds;
    vector<vector<int>>ans;

    permutationofstring(ans,v,ds,freq,n);

    for(auto it:ans)
    {
        for(auto i:it)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}