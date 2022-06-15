#include<bits/stdc++.h>
using namespace std;

//Eucldian Algo
//T.C = O(log(min(a,b)))
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}

int main()
{
    int a,b;
    cin>>a>>b;


    cout<<gcd(a,b)<<endl;
}
//Iterative Approach

/*
int gcd(int a,int b)
{
    int res=min(a,b);

    while(res!=0)
    {
        if(a%res==0 && b%res==0)
        {
            return res;
        }
        else
        {
            res--;
        }
    }
}