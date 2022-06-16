#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

//Time Complexity = O(n2logn)
bool isPrime(int n)
{
int c=0;

for(int i=1;i<=n;i++)
{
    if(n%i==0)
    {
        c++;
    }
}

if(c==2)
{
    return true;
}
else{
    return false;
}
}

void primefact(int n)
{
    for(int i=2;i<n;i++)
    {
        if(isPrime(i))
        {
            int x=i;
            while(n%x==0)
            {
                cout<<i<<" ";
                x=x*i;

            }
        }

    }
    cout<<endl;
}

int main()
{
int n;
cin>>n;


primefact(n);



}