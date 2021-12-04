#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int n, m, x;
int arr[20000001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        arr[x + 10000000]++;
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> x;
        cout << arr[x + 10000000] << " ";
    }

    return 0;
}