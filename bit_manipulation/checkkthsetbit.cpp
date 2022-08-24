#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int main()
{
int n,k;
cin>>n>>k;

//using left shift

int x=1<<(k-1);

if((n&x)!=0)
{
    cout<<"Kth bit is set"<<endl;
}
else{
    cout<<"Not set"<<endl;
}

/*
using right shift 

if(n>>(k-1)&1!=0)
{
    cout<<"set"<<endl;
}
else
{
    cout<<"Not"<<endl;
}
*/





}