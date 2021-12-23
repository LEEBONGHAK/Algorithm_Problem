#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int n, m, t, l, bm, r, result;
long long sum = 0;
vector<int> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        v.push_back(t);
    }

    sort(v.begin(), v.end());

    l = 0;
    r = v.back();
    while (l <= r)
    {
        sum = 0;
        bm = (l + r) / 2;

        for (int i: v)
            if (i > bm) sum += i - bm;

        if (sum >= m)
        {
            l = bm + 1;
            result = bm;
        }
        else r = bm - 1;
    }

    cout << result << endl;

    return 0;
}