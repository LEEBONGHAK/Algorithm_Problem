#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int l, p, v;
int i = 1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while(1)
    {
        cin >> l >> p >> v;
        if (!l) break;

        if (v % p >= l) cout << "Case " << i << ": " << (v / p) * l + l << endl;
        else cout << "Case " << i << ": " << (v / p) * l + v % p << endl;
        i++;
    }

    return 0;
}