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

int slow=v[0];
int fast=v[0];

do
{
    slow=v[slow];//moves one link at a time
    fast=v[v[fast]]; //moves two links at a time

}while(slow!=fast);

slow=v[0];

//Now moving one link at a time for both slow and fast

while(slow!=fast)
{
    slow=v[slow];
    fast=v[fast];

}

cout<<"The Repeating element is "<<slow<<endl;
}