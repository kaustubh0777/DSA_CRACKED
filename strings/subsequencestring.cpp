#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

// Time complexity =>O(m+n)

int main()
{

string s1,s2;
cin>>s1>>s2;

int i=0,j=0;

while(j<s2.length())
{
    if(s1[i]==s2[j])
    {
        i++;
        j++;
    }
    else{
        i++;
    }

}
if(j==s2.length())
{
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
}