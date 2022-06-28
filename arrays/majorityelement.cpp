//element that appears more than n/2 times

#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

//Time Complexity=O(n)
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
unordered_map<int,int>map;
int maje=-1;

for(int i=0;i<n;i++)
{
    map[v[i]]++;
}
for(int i=0;i<n;i++)
{
    if(map[v[i]]>n/2)
    {
        maje=v[i];

    }
}

cout<<maje<<endl;
}