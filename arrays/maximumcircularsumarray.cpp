#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, in;
    cin >> n;

    vector<int> A;

    for (int i = 0; i < n; i++)
    {
        cin >> in;
        A.push_back(in);
    }

    if (A.size() == 0)
        return 0;
    int sum = A[0];
    int maxSoFar = A[0];
    int maxTotal = A[0];
    int minSoFar = A[0];
    int minTotal = A[0];
    for (int i = 1; i < A.size(); i++)
    {
        maxSoFar = max(A[i], maxSoFar + A[i]);
        maxTotal = max(maxTotal, maxSoFar);

        minSoFar = min(A[i], minSoFar + A[i]);
        minTotal = min(minTotal, minSoFar);
        sum += A[i];
    }
    if (sum == minTotal)
        cout << maxTotal;
    cout << max(sum - minTotal, maxTotal);
}
