#include<bits/stdc++.h>
using namespace std;

void print(int i,int n)
{
    if(i>n)
    {
        return;
    }
    cout<<i<<" ";
    print(i+1,n);


}

//for n to 1

/*
void print(int n)
{
    if(n<1)
    {
        return;
    }

    cout<<n<<" ";
    return (n-1);
}
*/


int main()
{
    int n;
    cin>>n;

    int i=1;

    print(i,n);


}

