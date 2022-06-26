#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

//Time Complexity = O(n)
int main()
{
vector<int>arr;
int n,in;
cin>>n;

int max=INT_MIN;

for(int i=0;i<n;i++)
{
    cin>>in;
    arr.push_back(in);
}

for(int i=0;i<n;i++)
{
    if(arr[i]>max)
    {
        max=arr[i];
    }
}

cout<<max<<endl;
}