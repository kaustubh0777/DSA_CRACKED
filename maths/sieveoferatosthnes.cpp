#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

void sieve(int n)
{
    vector<bool>isPrime(n+1,true);

    for(int i=2;i<=sqrt(n);i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i;j<=n;j+=i)
            {
                isPrime[j]=false;

            }
        }


    }

    for(int i=2;i<=n;i++)
    {
        if(isPrime[i])
        {
            cout<<i<<" ";
        }
       
    }
     cout<<endl;

}

int main()
{
int n;
cin>>n;

sieve(n);



}