#include<bits/stdc++.h>
#define ll long long int
//#define m 1000000007

using namespace std;

int main()
{
int n,in,m;
cin>>n>>m;

vector<int>v;
for(int i=0;i<n;i++)
{
cin>>in;
v.push_back(in);
}

int min_diff=INT_MAX;
sort(v.begin(),v.end());

//i+m-1 gives the range of m packets or the index of mth packet from any index

for(int i=0;i+m-1<n;i++)
{
    if((v[i+m-1]-v[i])<min_diff)
    {
        min_diff=min(v[i+m-1]-v[i],min_diff);
    }

}

cout<<min_diff<<endl;


}
