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

int pos;

for(int i=v.size()-1;i>=0;i--)
{
    if(v[i]==x)
    {
        pos=i;
        break;
    }
}
cout<<"Last occurence is "<<pos+1<<endl;
}