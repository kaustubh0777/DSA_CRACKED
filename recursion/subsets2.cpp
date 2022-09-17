
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void subset2(int ind,vector<int> &arr, vector<vector<int>> &ans, vector<int>&ds) 
    {    
        ans.push_back(ds);  
        for(int i = ind;i<arr.size();i++) {
            if(i!=ind && arr[i]==arr[i-1]) continue; 
            ds.push_back(arr[i]);
            subset2(i+1, arr, ans, ds); 
            ds.pop_back(); 
        }
    }
    vector<vector<int>> subset2(vector<int>& candidates) 
    {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans; 
        vector<int> ds; 
        subset2(0,candidates, ans, ds); 
        return ans; 
        
    }
};
int main()
{
    Solution s;
    int n,in;
    cin>>n;
 
    vector<int>candidates;
    for(int i=0;i<n;i++)
    {
        cin>>in;
        candidates.push_back(in);
    }
    vector<vector<int>>res=s.subset2(candidates);
  
  //printing the subset
    for(auto i:res)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}