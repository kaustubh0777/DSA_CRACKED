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

int start=0;
int high=v.size()-1;

int mid;

while(start<high)
{
    mid=start+(high-start)/2;

    if(x==v[mid])
    {
        cout<<"found at pos "<<mid+1<<endl;
        break;
    }
    if(x>v[mid])
    {
        start=mid+1;

    }
    if(x<v[mid])
    {
        high=mid-1;
    }
}

cout<<endl;



}