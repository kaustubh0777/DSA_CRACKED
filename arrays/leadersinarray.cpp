#include<bits/stdc++.h>
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

    //16 17 4 3 5 2

    int flag=0;

    int i=n-1;
    int maxi=INT_MIN;

    while(i>=0)
    {
        if(v[i]>maxi)
        {
            maxi=v[i];
            cout<<maxi<<" ";
            i--;
        }
        else
        {
            i--;
        }


    }

    cout<<endl;
}