#include <bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int main()
{
    int n, in, k;
    cin >> n >> k;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> in;
        v.push_back(in);
    }

    vector<vector<bool>> dp(n, vector<bool>(k + 1, false));

    for (int i = 0; i < n; i++)
    {
        dp[i][0] = true;
    }

    if (v[0] <= k)
        dp[0][v[0]] = true;

    for (int ind = 1; ind < n; ind++)
    {
        for (int target = 1; target <= k; target++)
        {

            bool notTaken = dp[ind - 1][target];

            bool taken = false;
            if (v[ind] <= target)
                taken = dp[ind - 1][target - v[ind]];

            dp[ind][target] = notTaken || taken;
        }
    }

    // return dp[n - 1][k];

    cout << dp[n - 1][k] << endl;
}
