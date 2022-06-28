#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;


int binary_search(vector<int>&v,int start,int mid,int high,int x)
{
if(v[mid]==x)
{
    return mid;
}
if(start==high)
{
    return -1;
}

if(v[mid]>x)
{
    start=mid+1;

}
else{
    high=mid-1;
}
mid=start+(high-start)/2;
return binary_search(v,start,mid,high,x);
}

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
    int mid=start+(high-start)/2;

    if(binary_search(v,start,mid,high,x)==-1)
    {
        cout<<"NOt found"<<endl;
    }
    else
    {

    cout<<"Element found at position "<<binary_search(v,start,mid,high,x)+1<<endl;
    }

}