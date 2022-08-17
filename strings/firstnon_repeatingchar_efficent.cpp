#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int main()
{
int count=256;
vector<int>v(count,-1);

string s;
cin>>s;


for(int i=0;i<s.length();i++)
{
    if(v[s[i]]==-1)
    {
        v[s[i]]=i;
        
    }
    else{
        v[s[i]]=-2;
    }
}
int mini=INT_MAX;

for(int i=0;i<v.size();i++)
{
    if(v[i]>=0)
    {
        mini=min(mini,v[i]);
    }
}

if(mini==INT_MAX)
{
    cout<<"-1"<<endl;
}
else
{
    cout<<mini<<endl;
}


}