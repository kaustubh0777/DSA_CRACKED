//WAP To find the no of occurences of x

#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

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
int count=0;
unordered_map<int,int>map;

for(int i=0;i<n;i++)
{
    if(v[i]==x)
    {
        map[v[i]]++;
    }
}

cout<<map[x]<<endl;


}