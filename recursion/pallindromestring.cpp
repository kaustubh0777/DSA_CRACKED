#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

bool isPallindrome(string &s,int start ,int end)
{
    if(start>=end)
    {
        return true;
    }

    return (s[start]==s[end])&&isPallindrome(s,start+1,end-1);

}

int main()
{
    string s;
    cin>>s;

    int start=0;
    int end=s.length()-1;

    if(isPallindrome(s,start,end))
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

}