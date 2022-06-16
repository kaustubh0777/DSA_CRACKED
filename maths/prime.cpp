#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

//Time Complexity=O(n)

int main()
{
int n;
cin>>n;

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
    cout<<"Prime"<<endl;
}
else{
    cout<<"not"<<endl;
}

}

//Efficient Approach

/*
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

 */