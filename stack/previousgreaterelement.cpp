#include <bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

void previousgreater(vector<int>&v)
{
    int n = v.size();
    stack<pair<int, int>> s;
    vector<int>ans;

    for (int i = 0; i < n; i++)
    {
        while (s.size()>0 && s.top().second<v[i])
        {
            s.pop();
        }
        if(s.size()==0)
        {
            ans.push_back(-1);

        }
        else{
            ans.push_back(s.top().second);
        }
        s.push({i,v[i]});

    }
    //Now priting previous greater element
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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

    previousgreater(v);
}