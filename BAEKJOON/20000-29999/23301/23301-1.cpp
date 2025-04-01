#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, t, k, s, e, mx, rs, re;
int timeline[1000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        cin >> k;
        for (int j = 0; j < k; j++) {
            cin >> s >> e;
            for (int l = s; l < e; l++)
                timeline[l]++;
        }
    }

    for (int i = 0; i < 1001 - t; i++) {
        int tmp = 0;
        for (int j = i; j < i + t; j++) 
            tmp += timeline[j];

        if (tmp > mx) {
            mx = tmp;
            rs = i;
            re = i + t;
        }
    }

    cout << rs << " " << re << endl;

    return 0;
}