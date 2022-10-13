#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&a,vector<int>&b,vector<int>&c)
{
    int n=a.size();
    int m=b.size();


    int i=0,j=0,k=0;

    while(i<n && j<m)
    {
        if(a[i]<=b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<n)
    {
        c[k]=a[i];
        i++;
        k++;
    }
     while(j<m)
    {
        c[k]=b[j];
        j++;
        k++;
    }


}

int main()
{
    int n,m;
    cin>>n>>m;

    int in;

    vector<int>a;
    vector<int>b;

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
    vector<int>c(n+m,0);
    merge(a,b,c);

    for(int i=0;i<n+m;i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;


    
}