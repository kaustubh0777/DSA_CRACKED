#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&a,vector<int>&b)
{
    int n=a.size();
    int m=b.size();

    int gap = ceil((float)(n + m) / 2);
    while(gap>0)
    {
        int i=0;
        int j=gap;

        while(j<(n+m))
        {
            if(j<n && a[i]>a[j])
            {
                swap(a[i],a[j]);
            }
            else if(j>=n && i<n && a[i]>b[j-n])
            {
                swap(a[i],b[j-n]);
            }
            else if(j>=n && i>=n && b[i-n]>b[j-n])
            {
                swap(b[i-n],b[j-n]);

            }
            i++;j++;


        }
        if(gap==1)
        {
            gap=0;
        }
        else{
            gap = ceil((float) gap / 2);
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

    cout<<"The merged arrays are"<<endl;

    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    for(int i=0;i<b.size();i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;


}