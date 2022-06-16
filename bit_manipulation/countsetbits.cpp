#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int main()
{
int n;
cin>>n;

int c=0;

while(n!=0)
{
    if((n&1)!=0)
    {
        c++;


    }
    n=n>>1;
}

cout<<c<<endl;
}