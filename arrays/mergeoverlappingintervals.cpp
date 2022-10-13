#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,in;
    cin>>n;

    vector<int>v;
    vector<vector<int>>arr;

    //input the 2d array
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>in;
            v.push_back(in);

        }
        arr.push_back(v);
        v.clear();
        
    }

    sort(arr.begin(),arr.end());
    vector<vector<int>>m;
    //keep the first interval in the matrix m
    m.push_back(arr[0]);
    
    int j=0;
    for(int i=1;i<n;i++)
    {

        //check if the second element of first interval is greater than the 
        if(m[j][1]>=arr[i][0])
        {
            m[j][1]=max(m[j][1],arr[i][1]);//now choose the max of(a2,b2) to be as the second element 
            //of the merged interval
            // i.e., [a1,a2],[b1,b2]
        }
        else
        {
            j++;
            m.push_back(arr[i]);
        }
    }

    for(auto i:m)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }

    }
    cout<<endl;

}