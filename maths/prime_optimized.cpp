#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

bool check_prime(int n)
{

    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cin>>n;

    if(n%2!=0 && n%3!=0)
    {

    if(check_prime(n)==true)
    {
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not"<<endl;
    }
    }
    else
    {
        cout<<"Not"<<endl;
    }


}