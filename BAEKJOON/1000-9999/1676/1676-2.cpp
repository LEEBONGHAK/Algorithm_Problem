#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int n, cnt;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (int i = 5; i <= n; i *= 5)
        cnt += n / i;

    cout << cnt << endl;

    return 0;
}