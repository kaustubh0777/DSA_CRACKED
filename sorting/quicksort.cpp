//Quick Sort Algorithm
//Time Complexity = O(n)

#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&v,int low,int high)
{
    int pivot=v[high];

    int i=low-1;

    for(int k=low;k<high;k++)
    {

        if(v[k]<pivot)
        {
            i++;
            swap(v[i],v[k]);
        }
    }

    swap(v[i+1],v[high]);

    return i+1;




}
//First find the pivot element and place it at its correct position
//then again divide the array find a new pivot element ,place it at its correct position
void quicksort(vector<int>&v,int low,int high)
{
    if(low<high)
    {
        int pi=partition(v,low,high);
        quicksort(v,low,pi-1);
        quicksort(v,pi+1,high);
    }
}
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

    int low=0;
    int high=v.size()-1;

    quicksort(v,low,high);

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}