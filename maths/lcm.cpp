#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

//Brute force /Iterative Approach
int main()
{

int a,b;
cin>>a>>b;

int res=max(a,b);

while(true)
{

if(res%a==0 && res%b==0)
{
    cout<<res;
    break;

}
else{
    res++;
}
}


}
/*Optimized

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
int lcm(int a,int b)
{
    int res=(a*b)/gcd(a,b);
    return res;
}

lcm=(a*b)/gcd(a,b)