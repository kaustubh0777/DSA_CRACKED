#include<bits/stdc++.h>
using namespace std;

void permutations(int start,int end,string &s)
{
    if(start==end)
    {
        cout<<s<<" ";
        return;
    }
    else{
    for(int i=0;i<=end;i++)
    {
        swap(s[start],s[i]);

        permutations(start+1,end,s);

        swap(s[start],s[end]);
    }
    }
}

int main()
{

    string s;
    cin>>s;

    permutations(0,s.length()-1,s);


}