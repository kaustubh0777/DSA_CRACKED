//Important Question

#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

bool check(int n,int c)
{
    if(c>n)
    {
        return true;
    }
    if(n%c==0)
    {
        return false;
    }

    int np=n;
    np=np-np/c;//next element to be checked or the new value of n

    return check(np,c+1);
}

int main()
{
int n;
cin>>n;

if(check(n,2))
{
    cout<<"Lucky Number"<<endl;
}
else{
    cout<<"NOt"<<endl;
}

}