//Algorithm used to count the set bits

#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int brian(int n)
{
    int c=0;
    while(n)
    {
        n=n&(n-1);
        c++;
    }
    return c;
}

int main()
{
    int  n;
    cin>>n;

    cout<<brian(n)<<endl;




}