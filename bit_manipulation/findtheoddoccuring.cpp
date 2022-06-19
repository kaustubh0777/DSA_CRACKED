#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int get(vector<int>&v,int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        res=res^v[i];

    }
    return res;

}

int main()
{
    vector<int>v={2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};
    int n=v.size();

    cout<<get(v,n)<<endl;;
}