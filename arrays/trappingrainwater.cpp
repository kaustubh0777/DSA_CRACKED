#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&v)
{
    int n=v.size();

    vector<int>lmax(n);
    vector<int>rmax(n);
    int ans=0;

    //precompute the lmax
    lmax[0]=v[0];

    for(int i=1;i<n;i++)
    {
        lmax[i]=max(lmax[i-1],v[i]);
    }
    //precompute the rmax
    rmax[n-1]=v[n-1];

    for(int i=n-2;i>=0;i--)
    {
        rmax[i]=max(rmax[i+1],v[i]);
    }

    for(int i=1;i<n-1;i++)
    {
        ans+=(min(lmax[i],rmax[i])-v[i]);
    }
    return ans;
}


    /*

    Brute Force
    int lmax,rmax;
    int maxd=0;
    int n=v.size();


    for(int i=1;i<n-1;i++)
    {
       //first find the left max/lmax
       //maximum from the left till the current element
       lmax=v[i];
       for(int j=0;j<i;j++)
       {
         lmax=max(lmax,v[j]);

       }
       //now find the right max ,starting after the current element
       rmax=v[i];
       for(int j=i+1;j<n;j++)
       {
           rmax=max(rmax,v[j]);
       }

       //now finding the water on the top of the each bar

       maxd=maxd+(min(rmax,lmax)-v[i]);
    }
    return maxd;
    
    */
    


int main()
{
    vector<int>v;
    int n,in;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>in;
        v.push_back(in);
    }
    cout<<solve(v)<<endl;
}