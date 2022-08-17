#include<bits/stdc++.h>
#define ll long long int
// #define m 1000000007

using namespace std;

bool check(string s1,string s2,int n,int m)
{
    if(m==0)
    {
        return true;
    }
    if(n==0)
    {
        return false;
    }

    if(s1[n-1]==s2[m-1])
    {
        return check(s1,s2,n-1,m-1);//if both match,move to next index inboth
        
    }
    else{
        return check(s1,s2,n-1,m);//if they dont match just move forward in the s1 string
    }

}

int main()
{
string s1,s2;
cin>>s1>>s2;

int n=s1.length();
int m=s2.length();

if(check(s1,s2,n,m)==1)
{
    cout<<"Yes"<<endl;
}
else
{
    cout<<"No"<<endl;
}
}