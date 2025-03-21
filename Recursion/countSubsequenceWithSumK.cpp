#include <bits/stdc++.h>
using namespace std;

int printF(int idx, vector<int> &v, int s, int k)
{
    if (idx == v.size())
    {
        if (s == k)
        {
            return 1;
        }

        return 0;
    }

    s += v[idx];
    int left = printF(idx + 1, v, s, k);
    s -= v[idx];
    int right = printF(idx + 1, v, s, k);
    return left + right;
}

int main()
{
    vector<int> v = {1, 2, 1};

    vector<int> ds;

    int k = 2;

    int ans = printF(0, v, 0, k);
    cout << ans;

    return 0;
}