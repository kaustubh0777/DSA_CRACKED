#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

//the logic try all possible combination(n-a/n-b/n-c) until we get n(rope length=0) and reject if n<0

int max_pieces(int n,int a,int b,int c)
{
    if(n<=0)
    {
        return n;
    }

    int res=max(max(max_pieces(n-a,a,b,c),max_pieces(n-b,a,b,c)),max_pieces(n-c,a,b,c));

    if(res==-1)

    {
        return -1;
    }

    return res+1;

}

int main()
{
int n,a,b,c;
cin>>n>>a>>b>>c;

cout<<max_pieces(n,a,b,c)<<endl;

}