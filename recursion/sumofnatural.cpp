#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int sum(int i,int n,int ans)
{
    if(i==n+1)
    {
        return ans;
    }

    return sum(i+1,n,ans+i);
   

}

int main()
{
    int n;
    cin>>n;

    int i=0;
    int ans=0;

    cout<<sum(i,n,ans)<<endl;



    


}