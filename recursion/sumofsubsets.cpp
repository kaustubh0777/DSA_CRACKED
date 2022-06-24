// Given a set with a sum,count the number of subsets with the sum equal to the given sum

#include <bits/stdc++.h>
using namespace std;

int count(vector<int>&v,int sum,int i,int c)
{
    if(i==v.size())
    {
        if(sum==0)
        {
            c++;
        }
        return c;
    }
    

     c=count(v,sum,i+1,c);
   
     c=count(v,sum-v[i],i+1,c);
    

    return c;


}


int main()
{
    int n, in,sum;
    cin >>n>>sum;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        v.push_back(in);

    }

    cout<<count(v,sum,0,0)<<endl;
}