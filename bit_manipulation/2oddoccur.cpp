#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

vector<int>twoodd(int n,vector<int>&v)
{
    int xor1=0;
    int res1=0;
    int res2=0;
    for(int i=0;i<n;i++)
    {
        xor1=xor1^v[i];
    }
    int set=xor1&~(xor1-1);

    for(int i=0;i<n;i++)
    {
        if(v[i]&set!=0)
        {
            res1=res1^v[i];
        }
        else
        {
            res2=res2^v[i];
        }
    }

    vector<int>result;

    result.push_back(res1);
    result.push_back(res2);

    return result;
}

int main()
{
    vector<int>v={3,4,3,4,5,4,4,6,7,7};
    int n=v.size();
    
    vector<int>res=twoodd(n,v);

    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;


}