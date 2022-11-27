/*
Given an array arr[] denoting heights of N towers and a positive integer K.

For each tower, you must perform exactly one of the following operations exactly once.

Increase the height of the tower by K
Decrease the height of the tower by K
Find out the minimum possible difference between the height of the shortest and tallest towers after you have modified each tower.

You can find a slight modification of the problem here.
Note: It is compulsory to increase or decrease the height by K for each tower. After the operation, the resultant array should not contain any negative integers.
*/


#include<bits/stdc++.h>
using namespace std;

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
    sort(v.begin(),v.end());

    int m1,m2;

    int r=v[n-1]-v[0];

    for(int i=1;i<=n-1;i++)
    {
        if(v[i]>=k && v[n-1]>=k)
        {
            m2=max(v[i-1]+k,v[n-1]-k);
            m1=min(v[0]+k,v[i]-k);
            r=min(r,m2-m1);
        }
    }
    cout<<r<<endl;


}