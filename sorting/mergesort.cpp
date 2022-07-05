#include<bits/stdc++.h>
using namespace std;


void merge(vector<int>&v,int l,int mid,int r)
{
    
    int n1=mid-l+1;
    int n2=r-mid;

    vector<int>a(n1);
    vector<int>b(n2);
    int x;
    for(int i=0;i<n1;i++)
    {
        x=v[l+i];
        a[i]=x;
    }
    for(int i=0;i<n2;i++)
    {
        x=v[mid+1+i];
        b[i]=x;
    }

    int i=0,j=0,k=l;

    while(i<n1 && j<n2)
    {
        if(a[i]<=b[j])
        {
            v[k]=a[i];
            i++;

        }
        else
        {
            v[k]=b[j];
            j++;
        }
        k++;

    }
    //For remaining elements

    while(i<n1)
    {
        v[k]=a[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        v[k]=b[j];
        j++;
        k++;
    }

}

void mergesort(vector<int>&v,int l,int r)
{
    int mid=l+(r-l)/2;
    if(l<r)
    {
        mergesort(v,l,mid);
        mergesort(v,mid+1,r);
        merge(v,l,mid,r);
    }

}
int main()
{
    int n,in;
    cin>>n;
    vector<int>v;

    //Input Array/Vector
    
    for(int i=0;i<n;i++)
    {
    cin>>in;
    v.push_back(in);
    }

    //Applying Merge sort
     
     int l=0;
     int r=v.size()-1;

     mergesort(v,l,r);

     for(int i=0;i<n;i++)
     {
        cout<<v[i]<<" ";
     }
     cout<<endl;

}