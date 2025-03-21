#include <bits/stdc++.h>
using namespace std;

void printF(int idx, vector<int> &v, vector<int> &ds, int s, int k)
{
    if (idx == v.size())
    {
        if (s == k)
        {
            for (auto i : ds)
            {
                cout << i << " ";
            }
            cout << endl;
            return;
        }
        return;
    }

    s += v[idx];
    ds.push_back(v[idx]);
    printF(idx + 1, v, ds, s, k);
    s -= v[idx];
    ds.pop_back();
    printF(idx + 1, v, ds, s, k);
}

int main()
{
    vector<int> v = {1, 2, 1};

    vector<int> ds;

    int k = 2;

    printF(0, v, ds, 0, k);

    return 0;
}