#include <bits/stdc++.h>

#define MAX 8
#define endl '\n'
using namespace std;

int n, m;
int tmp[MAX], arr[MAX];
bool check[MAX];

void printCase(int pos)
{
    if (pos == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << " ";
        cout << endl;

        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (pos == 0) arr[pos] = tmp[i];
        else if (arr[pos - 1] <= tmp[i]) arr[pos] = tmp[i];
        else continue;

        printCase(pos + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> tmp[i];

    sort(tmp, tmp + n);
    printCase(0);

    return 0;
}