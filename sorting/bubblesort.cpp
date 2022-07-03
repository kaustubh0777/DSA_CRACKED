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
//Bubble sort begins

for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(v[i]>v[j])
        {
            swap(v[i],v[j]);
        }
    }
}

for(int i=0;i<n;i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
}