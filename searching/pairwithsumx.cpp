#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007


//Program to find a pair (x,y) in the sorted array ,such that x+y equals to the given sum
//Time Complexity =  O(n)
using namespace std;

int main()
{
int n,in,x;
cin>>n>>x;
vector<int>v;

for(int i=0;i<n;i++)
{
cin>>in;
v.push_back(in);
}
int p=0;
int q=v.size()-1;
int flag=0;

//3 5 9 2 8 10 11

while(p<=q)
{
    if(p==(q-1))
    {
        p++;
        q=v.size()-1;
    }
    if(v[p]+v[q]==x)
    {
        cout<<"The Pair is "<<v[p]<<" "<<v[q]<<endl;
        flag=1;
        break;
    }
    q--;

}
if(flag==0)
{
    cout<<"No such pair found"<<endl;
}

}