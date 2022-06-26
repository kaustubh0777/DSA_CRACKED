#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

//Time Complexity = O(n)

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

    unordered_map<int,int>map;

    for(int i=0;i<v.size();i++)
    {
        map[v[i]]++;
    }

    //Frequencies of every element the array

    for(int i=0;i<n;i++)
    {
        cout<<"Frequency of "<<v[i]<<" is "<<map[v[i]]<<endl;
    }
    


}