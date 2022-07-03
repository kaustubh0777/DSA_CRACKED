#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int main()
{
int n,in;
cin>>n;
vector<int>v;

for(int i=0;i<n;i++)
{
cin>>in;
v.push_back(in);
}
//Selection Sort Begins

int key;
int temp;
int pos;
int flag=0;

//5 4 3 2 1

int min_index;
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        min_index=i;
        if(v[j]<v[i])
        {
            min_index=j;
        }
        swap(v[min_index],v[i]);
    }

}

for(int i=0;i<n;i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;

}