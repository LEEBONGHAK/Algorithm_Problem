#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int n, m, b, t, remain_block, r, r1, r2;
int arr[501][501];
set<pair<int, int>> s;

void findResult(int element)
{
    t = 0;
    remain_block = b;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (element < arr[i][j])
            {
                t += arr[i][j] - element;
                remain_block -= arr[i][j] - element;
            }
            else
            {
                t += 2 * (element - arr[i][j]);
                remain_block += element - arr[i][j];
            }
        }
    }

    if (remain_block < 0) t += 2 * remain_block;

    s.insert({t, element});
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m >> b;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    cout << 1 << endl;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            findResult(arr[i][j]);

    cout << 1 << endl;
    cout << s.size() << endl;
    cout << *s.begin() << " " << *s.end() << endl;
    cout << 1 << endl;

    // r1 = s.begin().first;
    // r2 = s.begin().second;
    // for (auto p: s)
    // {
    //     if (r1 == p.first)
    //     {
    //         r1 = p.first;
    //         r2 = p.second;
    //     }
    // }

    // cout << r1 << " " << r2 << endl;

    return 0;
}