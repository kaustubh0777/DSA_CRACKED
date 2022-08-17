#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int main()
{
string s="i am Kaustubh Pathak";
vector<string>w;

string words="";

for(int i=0;i<s.length();i++)
{
    if(s[i]==' ')
    {
        w.push_back(words);
        words="";
    }
    else
    {
        words=words+s[i];
    }

}
reverse(w.begin(),w.end());

for(int i=0;i<w.size();i++)
{
    cout<<w[i]<<" ";
}
}