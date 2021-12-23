#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int n, m, b, t, remain_block, r, r1, r2;
int maxh = 0, minh = 257;
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
            if (element < arr[i][j])    // 블록 제거
            {
                t += 2 * (arr[i][j] - element);
                remain_block += arr[i][j] - element;
            }
            else    // 블록 추가
            {
                t += element - arr[i][j];
                remain_block -= element - arr[i][j];
            }
        }
    }

    if (t < 0 || remain_block < 0) return;

    s.insert({t, element});
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m >> b;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (minh > arr[i][j]) minh = arr[i][j];
            if (maxh < arr[i][j]) maxh = arr[i][j];
        }

    for (int i = minh; i <= maxh; i++)
        findResult(i);

    r1 = (*s.begin()).first;
    r2 = (*s.begin()).second;
    for(auto i = s.begin(); i != s.end(); i++)
        if (r1 == (*i).first) r2 = (*i).second;

    cout << r1 << " " << r2 << endl;

    return 0;
}