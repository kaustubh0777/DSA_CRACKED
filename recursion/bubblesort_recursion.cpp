#include<bits/stdc++.h>
using namespace std;

void bubblesort(vector<int>&v,int n)
{
    if(n==1)
    {
        return;
    }
    for(int i=0;i<n-1;i++)
    {
        if(v[i]>v[i+1])
        {
            swap(v[i],v[i+1]);
        }
    }
    bubblesort(v,n-1);
}

int main()
{
    vector<int>v;
    int in,n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>in;
        v.push_back(in);
    }
    n=v.size();
    bubblesort(v,n);

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}