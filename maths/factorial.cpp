#include<bits/stdc++.h>
using namespace std;
 //Recursive Solution 
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }

    return n*fact(n-1);


}

int main()
{
    int n;
    cin>>n;

    cout<<fact(n)<<endl;

   
}

/*
Iterative
int f=1;
for(int i=n;i>0;i--)
{
    f*=n;
}
cout<<f;
