#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int n, m, cnt1, cnt2;
int rmin = 64;
char arr[50][50];
char ew[8][8];
char eb[8][8];

void findResult(int x, int y)
{
    cnt1 = 0, cnt2 = 0;
    for (int i = x; i < x + 8; i++)
    {
        for (int j = y; j < y + 8; j++)
        {
            if ((i + j) % 2 == 0 && arr[i][j] != 'W') cnt1++;
            if ((i + j) % 2 == 0 && arr[i][j] != 'B') cnt2++;
            if ((i + j) % 2 == 1 && arr[i][j] != 'B') cnt1++;
            if ((i + j) % 2 == 1 && arr[i][j] != 'W') cnt2++;
        }        
    }

    rmin = min(min(cnt1, cnt2), rmin);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    for (int i = 0; i < n - 7; i++)
        for (int j = 0; j < m - 7; j++)
            findResult(i, j);

    cout << rmin << endl;

    return 0;
}