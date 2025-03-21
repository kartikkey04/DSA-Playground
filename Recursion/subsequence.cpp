#include <bits/stdc++.h>
using namespace std;

void printF(int idx, vector<int> &v, vector<int> &ds)
{
    if (idx == v.size())
    {
        for (auto i : ds)
        {
            cout << i << " ";
        }

        if (ds.size() == 0)
        {
            cout << "{ }";
        }

        cout << endl;
        return;
    }

    ds.push_back(v[idx]);
    printF(idx + 1, v, ds);
    ds.pop_back();
    printF(idx + 1, v, ds);
}

int main()
{
    vector<int> v = {3, 1, 2};

    vector<int> ds;

    printF(0, v, ds);
}