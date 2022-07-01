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
int count=0;

sort(v.begin(),v.end(),greater<int>());//nlogn

for(int i=0;i<v.size();i++)//O(n)
{
    if(v[i]==1)
    {
        count++;
    }
    else{
        break;
    }

}
cout<<count<<endl;
}