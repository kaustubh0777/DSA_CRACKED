//Most Important Problem on Binary Search


#include<bits/stdc++.h>
using namespace std;

bool ispossible(int mid,vector<int>&v,int k)
{
    int allocated=1;
    int pages=0;

    for(int i=0;i<v.size();i++)
    {
        if(v[i]>mid)
        {
            return false;
        }
        if(pages+v[i]>mid)
        {
            allocated+=1;
            pages=v[i];

            if(allocated>k)
            {
                return false;
            }
        }
        else{
            pages+=v[i];
        }
    }
    return true;

   
    
}


int main()
{
    int n,in,k;
    cin>>n>>k;
    vector<int>v;
    
    for(int i=0;i<n;i++)
    {
    cin>>in;
    v.push_back(in);
    }

    int high=0;

    for(int i=0;i<n;i++)
    {
        high=high+v[i];
    }

    int low=*min_element(v.begin(),v.end());
    int mid;
    int res;
    
    while(low<=high)
    {
        mid=low+(high-low)/2;

        if(ispossible(mid,v,k)==true)
        {
            res=mid;
            high=mid-1;

        }
        else{
            low=mid+1;
        }

    }

    cout<<res<<endl;

}