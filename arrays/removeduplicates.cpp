//methods to solve this problem
/*
1.use set container
2.use map
3.count the unique elements and push them to a new aray

*/

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

unordered_map<int,bool>mp;

for(int i=0;i<v.size();i++)
{
    //if the element is not present in the map print it
    //or if u see the element for the first time,print only the first occurence
    if(mp.find(v[i])==mp.end())
    {
        cout<<v[i]<<" ";

    }
    mp[v[i]]=true;
}

}