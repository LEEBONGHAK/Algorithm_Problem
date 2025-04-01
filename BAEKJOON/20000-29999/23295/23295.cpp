#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

long long n, t, k, s, e, mx_time, mx, rs, re;
long long timeline[200000];
long long sum[200000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        cin >> k;
        for (int j = 0; j < k; j++) {
            cin >> s >> e;
            timeline[s]++;
            timeline[e]--;
            mx_time = max(mx_time, e);
        }
    }

    sum[0] = timeline[0];
    for (int i = 1; i <= mx_time; i++) {
        timeline[i] += timeline[i - 1];
        sum[i] = sum[i - 1] + timeline[i];
    }


    for (int i = 0; i <= mx_time; i++) {
        long long temp;

        if (i == 0) temp = sum[i + t] - timeline[i + t];
        else temp = sum[i + t] - sum[i - 1] - timeline[i + t];

        if (temp > mx) {
            mx = temp;
            rs = i;
            re = i + t;
        }
    }

    cout << rs << " " << re << endl;

    return 0;
}