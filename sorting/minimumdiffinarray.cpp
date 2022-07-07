#include<bits/stdc++.h>
#define ll long long int

//#define m 1000000007

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

int mind=INT_MAX;
sort(v.begin(),v.end());

for(int i=n-1;i>=0;i--)
{
    mind=min(mind,abs(v[i]-v[i-1]));
}

cout<<mind<<endl;
}