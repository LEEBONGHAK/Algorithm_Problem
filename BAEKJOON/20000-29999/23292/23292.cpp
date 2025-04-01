#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

string brith, str;
pair<int, string> results[1000];
int n;

int bio(string x, string y) {
    int result = 1;
    int tmp = 0;
    for (int i = 0; i < 4; i++)
        tmp += ((x[i] - '0') - (y[i] - '0')) * ((x[i] - '0') - (y[i] - '0'));

    result *= tmp;
    tmp = 0;
    for (int i = 4; i < 6; i++)
        tmp += ((x[i] - '0') - (y[i] - '0')) * ((x[i] - '0') - (y[i] - '0'));

    result *= tmp;
    tmp = 0;
    for (int i = 6; i < 8; i++)
        tmp += ((x[i] - '0') - (y[i] - '0')) * ((x[i] - '0') - (y[i] - '0'));

    result *= tmp;
    return result;
}

bool cmp(pair<int, string> a, pair<int, string> b) {
    if (a.first == b.first) return (a.second < b.second);

    return (a.first > b.first);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> brith >> n;
    for (int i = 0; i < n; i++) {
        cin >> str;
        results[i].first = bio(brith, str);
        results[i].second = str;
    }

    sort(results, results + n, cmp);

    cout << results[0].second << endl;

    return 0;
}