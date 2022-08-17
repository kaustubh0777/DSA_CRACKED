#include<bits/stdc++.h>
using namespace std;

int solve(int ind,vector<int>&v)
{
   int n=v.size();
   int nums1=v[0];//previous1
   int nums2=0;//previous 2
   int cur;

   int pick,notpick;

   for(int i=1;i<n;i++)
   {
    pick=v[i];
    if(i>1)
    {
        pick+=nums2;
    }
    notpick=0+nums1;
    cur=max(pick,notpick);

    nums2=nums1;
    nums1=cur;
    }
   return nums1;
}
int main()
{
    int n;
    cin>>n;

    int in;
    vector<int>v;

    for(int i=0;i<n;i++)
    {
        cin>>in;
        v.push_back(in);
    }

    vector<int>ans1;
    vector<int>ans2;

    for(int i=0;i<n;i++)
    {
        if(i!=0)
        {
        ans1.push_back(v[i]);
        }
        if(i!=n-1)
        {
        ans2.push_back(v[i]);
        }
    }

    int ans=max(solve(n-1,ans1),solve(n-1,ans2));

    cout<<ans<<endl;

}