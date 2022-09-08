#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>&v,int i,int n)
{
    if(i==n-i-1)
    {
        return;
    }
    swap(v[i],v[n-i-1]);
    return reverse(v,i+1,n);
}

/*
Paramaetrized recursion
void reverse(vector<int>&v,int low,int high)
{
    if(low==high)
    {
        return;
    }
    swap(v[low],v[high]);
    reverse(v,low+1,high-1);
}
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
    

    reverse(v,0,n);

    //printing the array

    for(auto i:v)
    {
        cout<<i<<endl;
    }
}