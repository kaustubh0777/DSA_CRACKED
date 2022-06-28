#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n,in;
    cin>>n;
    vector<int>v;
    
    //input the vector
    for(int i=0;i<n;i++)
    {
    cin>>in;
    v.push_back(in);
    }

    
    vector<int>res(n,0);

    for(int i=0;i<n;i++)
    {
        if(v[i]%2==0)
        {
            res[i]=1;
          
        }
    }

    int c=0;
    int maxc=0;

    //10 12 14 7 8
    // 1 1  1 0  1

    for(int i=0;i<n;i++)
    {
        if(i+1<n)
        {
        if(res[i]!=res[i+1])
        {
            c++;
        }
        maxc=max(c,maxc);
        if(res[i]==res[i+1])
        {
            c=0;
        }
        }
    }


    cout<<maxc+1<<endl;
}