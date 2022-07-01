#include <bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int main()
{
    int n, in, x;
    cin >> n >> x;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> in;
        v.push_back(in);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        int num = v[i];
        int target = x - num;
        for (int l = i + 1, r = n - 1; l < r;)
        {
            if (v[l] + v[r] > target)
            {
                r--;
            }
            else if (v[l] + v[r] < target)
            {
                l++;
            }
            else
            {
                // case in which v[l]+v[r]==target
                cout << "Triplet is " << v[i] << " " << v[l] << " " <<v[r]<< endl;
                while (l < n - 1 && v[l] == v[l + 1])
                    l++;
                while (r > 0 && v[r] == v[r - 1])
                    r--;

                l++;
                r--;
            }
        }
    }
}