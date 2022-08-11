#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int in;
    vector<int>heights;
    //vector<int>dp(n,0);

    for(int i=0;i<n;i++)
    {
        cin>>in;
        heights.push_back(in);
    }


    int cur,prev1=0,prev2=0;
    int fs,ss;

    for(int i=1;i<n;i++)
    {
        fs=prev1+abs(heights[i]-heights[i-1]);
        ss=INT_MAX;
        if(i>1)
        {
            ss=prev2+abs(heights[i]-heights[i-2]);

        }
        cur=min(fs,ss);
        prev2=prev1;
        prev1=cur;

    }
    cout<<prev1<<endl;
}