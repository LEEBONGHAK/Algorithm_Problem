#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, sum = 0;
    for (int i = 0; i < 5; i++) {
        cin >> a;
        sum += a;
    }
    cout << sum << endl;

    return 0;
}