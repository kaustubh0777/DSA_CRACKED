#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int max_sum(int ind,vector<int>&v)
{
    if(ind==0)
    {
        return v[ind];
    }
    if(ind<0)
    {
        return 0;
    }   

    int pick=v[ind]+max_sum(ind-2,v);
    int not_pick=0+max_sum(ind-1,v);

    return max(pick,not_pick);

}

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

cout<<max_sum(v.size()-1,v)<<endl;

}