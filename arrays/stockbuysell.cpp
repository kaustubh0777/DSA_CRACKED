#include<bits/stdc++.h>
using namespace std;


//Calculate the maximum profit we can get by Buying and sellling the stocks
//Time complexity = O(n)

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
    int minp=INT_MAX;
    int maxp=0;

    for(int i=0;i<n;i++)
    {
        minp=min(v[i],minp);
        maxp=max(v[i]-minp,maxp);
    }

    cout<<maxp<<endl;

}