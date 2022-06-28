#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

//Time complexity = O(N)

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

    int count=0;
    int max_count=0;
    int i=0;

    while(i<n)
    {
        if(v[i]==1)
        {
            count++;
           

        }
         max_count=max(max_count,count);
         if(v[i]==0)
         {
            count=0;

         }
         i++;
    }

    cout<<"Maximum consecutive 1's = "<<max_count<<endl;

}