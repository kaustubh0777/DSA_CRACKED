#include<bits/stdc++.h>
using namespace std;

//functional recursion

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+sum(n-1);

}


/*
Parameterized recursion
void solve(int i,int sum)
{
    if(i<1)
    {
        cout<<sum<<endl;
        return;
    }
    sum=sum+i;
    return solve(i-1,sum);
}
*/
int main()
{
    int n;
    cin>>n;

    // int sum=0;

    cout<<sum(n)<<endl;

}
