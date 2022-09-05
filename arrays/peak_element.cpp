// Finding the peak element using binary search

#include<bits/stdc++.h>
using namespace std;

int peakelement(vector<int>&v)
{
    int low=0;
    int high=v.size()-1;
    int mid;
    int res;

    while(low<=high)
    {
        mid=(low+high)/2;
        if(mid==0) //if mid is 0th index then its should be greater then its next element
        {
            if(v[mid]>v[mid+1])
            {
                return mid;
            }
        }
        if(mid==v.size()-1)//if mid is n-1th index then its should be greater then its previous element
        {
            if(v[mid]>v[mid-1])
            {
                return mid;
            }
        }
        if(v[mid]>v[mid-1] && v[mid]>v[mid+1])//if peak element is at mid
        {
            return mid;
        }
        if(v[mid]<v[mid-1])//if left of mid is greater than mid,ignore second half
        {
            high=mid-1;
        }
        else{
            low=mid+1;//if right of mid is greater than mid,ignore first half
        }

        res=v[low];

    }
    return res;

}

int main()
{
    int in,n;
    vector<int>v;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>in;
        v.push_back(in);
    }

    int ans=peakelement(v);

    cout<<ans<<endl;
}