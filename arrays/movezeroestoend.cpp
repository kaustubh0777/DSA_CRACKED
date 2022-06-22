/*
Methods to solve this Problem
1.Count no of non zero elements,push them to a new array and Zeroes=orgarr.size()-newarr.size()
*/


#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int main()
{
int n,in;
cin>>n;
vector<int>v;
vector<int>arr;

//Input original array and at the same time include the non zero elements in arr
for(int i=0;i<n;i++)
{
cin>>in;
if(in!=0)
{
    arr.push_back(in);
}
v.push_back(in);
}

//remaining elements of the arr must be 0
for(int i=arr.size();i<=n;i++)
{
    arr.push_back(0);
}

for(int i=0;i<=n;i++)
{
    cout<<arr[i]<<" ";
}



}