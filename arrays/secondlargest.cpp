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

  int max=INT_MIN;
  int max1=INT_MIN;

  for(int i=0;i<n;i++)
  {
    if(v[i]>max)
    {
      max=v[i];

    }
  }
  for(int i=0;i<n;i++)
  {
    if(v[i]>max1 && v[i]<max)
    {
      max1=v[i];

    }
  }

  cout<<"Second Largest "<<max1<<endl;



}