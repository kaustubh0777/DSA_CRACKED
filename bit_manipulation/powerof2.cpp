#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int main()
{
int n;
cin>>n;

int f=0;

int res=1;

if(n==1 || n==2)
{
    cout<<"Yes"<<endl;
}
else{
    while(res<=n)
    {
        res*=2;
        if(res==n)
        {
            cout<<"Yes"<<endl;
            f=1;
            break;
        }


    }

    if(f==0)
    {
        cout<<"No"<<endl;
    }


}

}