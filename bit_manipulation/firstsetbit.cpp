#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int main()
{
    int n;
    cin>>n;

    int c=0;
    int f=0;

    while(n)
    {
        if(n&1)
        {
            f=1;
            break;

        }
        
       n=n>>1;
    }

    if(f==0)
    {
        cout<<"No set bits"<<endl;
    }
    else{
        cout<<"the first bit is set"<<endl;
    }

    

}