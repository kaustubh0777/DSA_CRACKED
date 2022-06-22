#include<bits/stdc++.h>
using namespace std;

//TIme Complexity=O(n)

int  main()
{
    int n,in,k;
    cin>>n>>k;

    vector<int>v;

    for(int i=0;i<n;i++)
    {
        cin>>in;
        v.push_back(in);
    }
    
    vector<int>arr;

    for(int i=k;i<n;i++)
    {
        arr.push_back(v[i]);
       
    }
    int p=0;

    while(p<k)
    {
        arr.push_back(v[p]);
        p++;
    }


    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    


}