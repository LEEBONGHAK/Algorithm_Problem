#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int n, m;
int num[8];
bool check[8];

void printCase(int pos)
{
    if (pos == m)
    {
        for (int i = 0; i < m; i++)
            cout << num[i] << " ";

        cout << endl;
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        num[pos] = i;
        printCase(pos + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    printCase(0);

    return 0;
}