#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int n, m, sums, close = 0;
int tmp[3];
int arr[101];
bool check[101];

void findResult(int pos)
{
    if (pos == 3)
    {
        sums = 0;
        for (int i = 0; i < 3; i++)
            sums += tmp[i];

        if (sums <= m && abs(close - m) > abs(sums - m))
            close = sums;

        return;
    }

    for (int i = 0; i < n; i++) {
        if (!check[i])
        {
            check[i] = true;
            tmp[pos] = arr[i];
            findResult(pos + 1);
            check[i] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    findResult(0);

    cout << close << endl;

    return 0;
}