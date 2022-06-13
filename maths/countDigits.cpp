#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int c=0;

    while(n)
    {
        c++;
        n=n/10;
    }

    cout<<c<<endl;
}


