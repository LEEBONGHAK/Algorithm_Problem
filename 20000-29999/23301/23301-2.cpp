#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, t, k, s, e, mx, rs, re;
int timeline[1001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        cin >> k;
        for (int j = 0; j < k; j++) {
            cin >> s >> e;
            timeline[s] += 1;
            timeline[e] -= 1;
        }
    }

    for (int i = 1; i < 1001; i++) 
        timeline[i] += timeline[i - 1];


    for (int i = 0; i < 1001 - t; i++) {
        int temp = 0;
        for (int j = i; j < i + t; j++) {
            temp += timeline[j];
        }

        if (temp > mx) {
            mx = temp;
            rs = i;
            re = i + t;
        }
    }

    cout << rs << " " << re << endl;

    return 0;
}