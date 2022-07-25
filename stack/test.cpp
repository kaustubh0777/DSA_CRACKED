#include<bits/stdc++.h>
using namespace std;

int main()
{
  for(int i=1;i<=5;i+=2)
  {
    for(int sp=5;sp>=i;sp--)
    {
      cout<<" ";
    }
    for(int j=1;j<=i;j++)
    {
      cout<<"*";
      cout<<" ";
    }
    cout<<endl;
  }
  for(int i=3;i>=1;i-=2)
  {
    for(int sp=0;sp<3-i;sp++)
    {
      cout<<" ";
    }
    for(int j=1;j<=i;j++)
    {
      cout<<"*";
      cout<<" ";
    }
    cout<<endl;
  }
}