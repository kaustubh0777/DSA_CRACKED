#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,in;
    cin>>k>>n;

    vector<int>v;

    for(int i=0;i<n;i++)
    {
        cin>>in;
        v.push_back(in);
    }

    int max_sum=0;

    for(int i=0;i<k;i++)
    {
        max_sum+=v[i];
    }

    int maxi;

    for(int i=k;i<n;i++)
    {
        max_sum+=v[i]-v[i-k];
        maxi=max(maxi,max_sum);
    }
    cout<<maxi;

}