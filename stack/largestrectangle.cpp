#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int largesthistogram(vector<int>&v)
{

    int n = v.size();
    vector<int> left(n,0);
    vector<int> right(n,0);

    stack<int> s;
    
    // for the left

    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && v[s.top()] >= v[i])
        {
            s.pop();
        }

        if (s.empty() == false)
        {
            left[i]=(s.top() + 1);
        }
        s.push(i);
    }
    // for the right
    // first empty the current stack and then reuse it

    while (!s.empty())
    {
        s.pop();
    }

    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && v[s.top()] >= v[i])
        {
            s.pop();
        }

        if (s.empty() == false)
        {
            right[i] = s.top()-1;
        }
        else
        {
            right[i]=n-1;
        }
        s.push(i);
    }
    int max_area=0;

    for(int i=0;i<left.size();i++)
    {
        max_area=max(max_area,(right[i]-left[i]+1)*v[i]);
    }
    return max_area;

}
int largestrectangle(vector<vector<int>>&mat,int r,int c)
{

    vector<int>currow=mat[0];
    int maxarea=largesthistogram(currow);

    for(int i=1;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(mat[i][j]==1)
            {
                currow[j]+=1;
            }
            else{
                currow[j]=0;
            }

        }
        int curarea=largesthistogram(currow);
        maxarea=max(curarea,maxarea);
    }
    return maxarea;
}

int main()
{
    vector<vector<int>>mat;
    vector<int>v;

    int r,c,in;
    cin>>r>>c;


    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>in;
            v.push_back(in);

        }
        mat.push_back(v);
        v.clear();

    }
    cout<<largestrectangle(mat,r,c)<<endl;


}