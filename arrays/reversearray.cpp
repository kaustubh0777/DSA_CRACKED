#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int main()
{
    int n,in;
    cin>>n;
    vector<int>v;
    
    for(int i=0;i<n;i++)
    {
    cin>>in;
    v.push_back(in);
    }

    int start=0;
    int end=v.size()-1;

    int temp;
    while(start<=end)
    {
        temp=v[start];
        v[start]=v[end];
        v[end]=temp;

        start++;
        end--;

    }

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

}