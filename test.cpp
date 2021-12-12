#include <bits/stdc++.h>

#define MAX 8
#define endl '\n'
using namespace std;

int n, m;
int tmp[MAX], arr[MAX];

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
        arr[pos] = tmp[i];
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