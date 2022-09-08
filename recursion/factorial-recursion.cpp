//Print the factorial of a number using tail recursion

#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n==1)
    {
        return n;
    }

    return n*fact(n-1);
}

/*
Parametrized recursion
int fact(int n,int k)
{
    if(n==0 || n==1)
    {
        return k;
    }

    return fact(n-1,k*n);

}
*/


int main()
{
    int n,k=1;
    cin>>n;

    cout<<fact(n)<<endl;
}