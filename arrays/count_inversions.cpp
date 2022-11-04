#include<bits/stdc++.h>
using namespace std;

int merge(vector<int>v,vector<int>temp,int left,int mid,int right)
{
    int i,j,k;
    int c=0;

    i=left;
    j=mid;
    k=left;

    while((i<=(mid-1))&& (j<=right))
    {
        if(v[i]<=v[j])
        {
            temp[k++]=v[i++];

        }
        else{
            temp[k++]=v[j++];
            c+=mid-1;
        }
    }
    while(i<=mid-1)
    {
        temp[k++]=v[i++];

    }
    while(j<=right)
    {
        temp[k++]=v[j++];
    }
    for(i=left;i<=right;i++)
    {
        v[i]=temp[i];
    }
    return c;




}
int mergesort(vector<int>&v,vector<int>&temp,int left,int right)
{
    int mid,c=0;

    if(left<right)
    {
        mid=(right+left)/2;

        c+=mergesort(v,temp,left,mid);
        c+=mergesort(v,temp,mid+1,right);
        c+=merge(v,temp,left,mid,right);
    }
    return c;
}
int main()
{
    int n,in;
    cin>>n;

    vector<int>v;
    vector<int>temp(n);

    for(int i=0;i<n;i++)
    {
        cin>>in;
        v.push_back(in);
    }
   int inv= mergesort(v,temp,0,n);

   cout<<inv<<endl;



}