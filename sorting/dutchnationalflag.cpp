//Dutch National FLag Algorithm 

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

    int low=0;
    int mid=0;
    int high=v.size()-1;

    while(mid<=high)
    {
        if(v[mid]==0)
        {
            swap(v[mid],v[low]);
            low++;
            mid++;
            continue;
        }
        if(v[mid]==1)
        {
            mid++;
            continue;

        }
        if(v[mid]==2)
        {
            swap(v[mid],v[high]);
            high--;
            continue;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}