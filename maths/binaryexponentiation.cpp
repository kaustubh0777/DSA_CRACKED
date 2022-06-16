#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int main()
{
int x,n;
cin>>x>>n;

int res=1;

while(n>0)
{
    if(n%2!=0)
    {
        //Bit is 1
        res=res*x;



    }
    x=x*x;
    n=n/2;
}

cout<<res<<endl;
}