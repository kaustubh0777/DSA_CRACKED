#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

//Time Complexity = O(n)

bool check(vector<int>&v)
{
    int i=0;
    while(i<v.size())
    {
        if(i+1<v.size())
        {
        if(v[i]>v[i+1])
        {
            cout<<v[i]<<" "<<v[i+1]<<endl;
            return false;
        }
        }
        i++;

    }

    return true;
}

int main()
{
int n;
cin>>n;

int in;

vector<int>v;

for(int i=0;i<n;i++)
{
    cin>>in;
    v.push_back(in);
}

if(check(v)==true)
{
    cout<<"sorted"<<endl;
}
else{
    cout<<"Unsorted"<<endl;
}

}