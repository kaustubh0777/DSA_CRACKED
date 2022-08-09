//Deletion of an element in an array

#include<bits/stdc++.h>
using namespace std;

//Time Complexity = O(n)

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
    //Find the position of the element to be deleted
     
    int pos=-1;

    for(int i=0;i<n;i++)
    {
        if(v[i]==x)
        {
            pos=i;
        }

    }
    //Now deleting that element at the position

    for(int i=pos;i<n;i++)
    {
        v[i]=v[i+1];
    }

    n=n-1;

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    
}