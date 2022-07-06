#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&a,vector<int>&b)
{
    int i=0;
    int j=0;
   
    int n1=a.size();
    int n2=b.size();

    while(i<n1 && j<n2)     
    {
        if(i>0 && a[i]==a[i-1])
        {
            i++;
            continue;
        }
        if(a[i]<b[j])
        {
            i++;
        }
        if(a[i]>b[j])
        {
            j++;
        }
        if(a[i]==b[j])
        {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }

}
int main()
{
    vector<int>a;
    vector<int>b;

    int n,m,in;
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        cin>>in;
        a.push_back(in);
    }
    for(int i=0;i<m;i++)
    {
        cin>>in;
        b.push_back(in);
    }

   merge(a,b);


       
  
}