//Most Optimal solution using Dutch Flag Algorithm
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
    int high=n-1;
    int mid=0;

    while(mid<=high)
    {
        if(v[mid]==0)
        {
            swap(v[mid],v[low]);
            low++;
            mid++;
        }
        
        else if(v[mid]==1)
        {
            mid++;
        }
        else if(v[mid]==2)
        {
            swap(v[mid],v[high]);
            high--;
        }

    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" "<<endl;
    }




}