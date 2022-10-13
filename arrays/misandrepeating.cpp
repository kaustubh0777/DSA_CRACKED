#include<bits/stdc++.h>
using namespace std;

int main()
{
    int xor1;
    int set_bit;

    vector<int>v;
    int n,in;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>in;
        v.push_back(in);

    }
    xor1=v[0];
    for(int i=1;i<n;i++)
    {
        xor1=xor1^v[i];
    }
    for(int i=1;i<=n;i++)
    {
        xor1=xor1^i;
    }
    set_bit=xor1&~(xor1-1);
    int x=0,y=0;
    
    for(int i=0;i<n;i++)
    {
        if(set_bit&v[i])
        {
            x=x^v[i];
        }
        else
        {
            y=y^v[i];
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(set_bit&i)
        {
            x=x^i;
        }
        else
        {
            y=y^i;
        }


    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==x)
        {
            c++;

        }
    }
    if(c==0)
    {
        cout<<y<<" "<<x<<endl;
    }
    else
    {
        cout<<x<<" "<<y<<endl;
    }

}