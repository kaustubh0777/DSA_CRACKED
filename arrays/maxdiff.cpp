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

int p=1;
int maxi=INT_MIN;
int mine=v[0];

while(p<n)
{

  maxi=max((v[p]-mine),maxi);
  mine=min(v[p],mine);

  p++;
   
    
}
cout<<maxi<<endl;

}