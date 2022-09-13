/*
Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. 
You may return the combinations in any order.
The same number may be chosen from candidates an unlimited number of times. 
Two combinations are unique if the frequency of at least one of the chosen numbers is different.
It is guaranteed that the number of unique combinations that sum up to target is less than 150 combinations for the given input.

Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]
Explanation:
2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
7 is a candidate, and 7 = 7.
These are the only two combinations.

*/

#include<bits/stdc++.h>
using namespace std;

void combination_sum(vector<int>&a,vector<vector<int>>&ans,vector<int>v,int i,int k)
{
    if(i==a.size())//if we have taken all the pick and non pick combination and moved to the last index
    {
        if(k==0)// if target sum becomes 0
        {
            ans.push_back(v);
        }
        return;
    }
    if(a[i]<=k)//only add a[i] to the list if its less than or equal to the target
    {
        v.push_back(a[i]);//pick
        combination_sum(a,ans,v,i,k-a[i]);//this condition helps to take repeated nos until the base condition satisfies
        v.pop_back();//not pick
    }
    combination_sum(a,ans,v,i+1,k);//now move to the next index and try all the pick & non pick combinations


}

int main()
{
    vector<vector<int>>ans;
    vector<int>v;

    vector<int>a;
    int n,in,k;
    cin>>n>>k;

    for(int i=0;i<n;i++)
    {
     cin>>in;
     a.push_back(in);   
    }

    combination_sum(a,ans,v,0,k);

    for(auto i:ans)
    {
        for(auto it:i)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
}