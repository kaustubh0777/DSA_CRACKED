//finding kth smallest using quick sort method

#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int kthsmallest(vector<int>&v,int k,int low,int high)
{
    if(k>0 && k<=high-low+1)
    {
        int pos=partition(v,low,high);

        if(pos==k-1)
        {
            return v[pos];
        }
        else if(pos-low>k-1)
        {
            return kthsmallest(v,k,pos-1,k);
        }

        return kthsmallest(v,k-pos+low-1,pos+1,high);
    }

    return -1;

}

int partition(vector<int>&v,int low,int high)
{
    int pi=v[high];
    int i=low-1;

    for(int j=low;j<high;j++)
    {
        if(v[j]<pi)
        {
            i++;
            swap(v[j],v[i]);
        }

    }
    swap(v[i+1],v[high]);

    return i+1;

}

int main()
{
int n,in,k;
cin>>n>>k;
vector<int>v;

for(int i=0;i<n;i++)
{
cin>>in;
v.push_back(in);
}

int low=0;
int high=v.size()-1;

if(kthsmallest(v,k,low,high)==-1)
{
    cout<<"K is not in the given range"<<endl;
}
else{
    cout<<kthsmallest(v,k,low,high);
}

}