#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

//Generate numbers with given digits

int main()
{
    int n;
    cin>>n;

    queue<string>q;
    string res;

    q.push("5");
    q.push("6");

    for(int i=0;i<n;i++)
    {
        res=q.front();
        cout<<res<<endl;
        q.pop();
        
        q.push(res+"5");
        q.push(res+"6");


    }

   

}