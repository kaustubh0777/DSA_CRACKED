#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,rev=0;
    cin>>n;

    for(int i=n;i!=0;i=i/10)
    {
        d=i%10;
        rev=rev*10+d;

    }

    if(rev==n)
    {
        cout<<"Pallindrome"<<endl;
    }
    else{
        cout<<"Not"<<endl;
    }

    
}
