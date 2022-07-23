#include <bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

/*
Approach- maintain a stack which only stores the index of the elemnts which are nearest smallest of that 
number ,so we maintain two arrays left and right in which we store the nearest smallest
in the left and right of that element

and then we calculate area by (right[i]-left[i]+1)*heights[i];
*/
int largest_histogram(vector<int> &v)
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
int main()
{
    int n, in;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> in;
        v.push_back(in);
    }
    cout<<largest_histogram(v)<<endl;
}