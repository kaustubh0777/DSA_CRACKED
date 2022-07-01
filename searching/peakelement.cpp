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

if(v[0]>=v[1])
{
    cout<<v[0]<<endl;
}
else{



for(int i=1;i<n;i++)
{
    if(v[i]>=v[i-1] && v[i]>=v[i+1])
    {
        cout<<v[i]<<endl;
        break;
    }
}
}

}