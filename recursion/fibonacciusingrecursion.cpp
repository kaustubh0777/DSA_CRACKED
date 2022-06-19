#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int fib(int n)
{
    if(n==1||n==0)
    {
        return n;
    }

    return fib(n-1)+fib(n-2);
}

int main()
{
int n;
cin>>n;

cout<<fib(n)<<endl;


}