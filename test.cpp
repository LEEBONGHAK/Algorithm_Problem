#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int l, a, b, c, d;
int tmp1, tmp2;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> l >> a >> b >> c >> d;

    if (b % d == 0) tmp1 = b / d;
    else tmp1 = b / d + 1;

    if (a % c == 0) tmp2 = a / c;
    else tmp2 = a / c + 1;

    cout << l - (tmp1 > tmp2 ? tmp1 : tmp2) << endl;

    return 0;
}