#include<bits/stdc++.h>
using namespace std;

//Maximum sum in an array if we pick  nonadjacent elements in the array
//Time Complexity =O(N)

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
    vector<int>v;
    int n,in;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>in;
        v.push_back(in);
    }
    // vector<int>dp(n+1,-1);
    cout<<solve(n-1,v)<<endl;
}