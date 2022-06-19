#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int main()
{
int n;
cin>>n;

//use brian algo to count the total set bits
int c=0;
while(n)
{
    n=n&(n-1);
    c++;

}

if(c==1)
{
    cout<<"yes"<<endl;
}
else{
    cout<<"no"<<endl;
}

}