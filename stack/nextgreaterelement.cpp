#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

vector<int>nextgreaterelement(vector<int>&v)
{
int n=v.size();
stack<int>s;
vector<int>ans(n,-1);

for(int i=2*n-1;i>=0;i--)
{
    while(!s.empty() && s.top()<=v[i%n])
    {
        s.pop();

    }
    if(i<n)
    {
        if(s.empty()==false)
        {
            ans[i]=s.top();
        }
    }
       
    s.push(v[i%n]);
    

}
return ans;
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

vector<int>res=nextgreaterelement(v);

for(int i=0;i<res.size();i++)
{
    cout<<res[i]<<" ";
}

}