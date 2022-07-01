#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

//Calculating square root of an number using binary search
int main()
{
int x;
cin>>x;

int low=1;
int high=x;
int mid;
int msq;
int flag=0;
int ans;

while(low<high)
{
    mid=low+(high-low)/2;
    msq=mid*mid;

    if(msq==x)
    {
        cout<<mid<<endl;
        flag=1;
        break;
    }
    if(msq>x)
    {
        high=mid-1;
    }
    else{
        low=mid+1;
        ans=mid;//this is the number we got so far such that (mid*mid<x)
    }
    
}

if(flag!=1)
{
    cout<<ans<<endl;
}



}