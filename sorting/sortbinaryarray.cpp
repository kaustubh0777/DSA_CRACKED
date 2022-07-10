#include<bits/stdc++.h>
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

    int p=-1;

    //0 1 1 1 0

    for(int i=0;i<n;i++)
    {
        if(v[i]<1)
        {
            p++;
            swap(v[i],v[p]);

        }

   }

   for(int i=0;i<n;i++)
   {
    cout<<v[i]<<" ";
   }
   cout<<endl;


}