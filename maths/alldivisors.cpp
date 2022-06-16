#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

void alldivisors(int n)
{
    int i;
    //first print the smaller

    for(i=1;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
    //second part prints the larger numbers
    for(;i>=1;i--)
    {
        if(n%i==0)
        {
            cout<<n/i<<" ";
        }
    }

}


int main()
{
int n;
cin>>n;

alldivisors(n);


}