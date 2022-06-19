#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int main()
{
int max=0;
int N;
cin>>N;

int in;
vector<int>v;

for(int i=0;i<N;i++)
{
    cin>>in;
    v.push_back(in);
}
int x;

for(int i=0;i<N;i++)
{
    for(int j=0;j<N;j++)
    {
        if(i!=j)
        {
            x=v[i]&v[j];

            if(x>max)
            {
                max=x;
            }
        }
    }
    
}

cout<<max<<endl;
}