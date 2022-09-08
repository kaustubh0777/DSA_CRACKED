/*
Print all the subsequence of  the array
Note:- can also be solved using power set
*/
#include<bits/stdc++.h>
using namespace std;

void print(vector<int>&v,vector<int>ans,int i)
{
    if(i>=v.size())
    {
        for(auto i:ans)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    ans.push_back(v[i]);
    print(v,ans,i+1);
    ans.pop_back();
    print(v,ans,i+1);
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
    vector<int>ans;
    print(v,ans,0);

}