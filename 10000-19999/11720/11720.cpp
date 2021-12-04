#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, result = 0;
    string str;

    cin >> n;
    cin >> str;
    for (int i = 0; i < n; i++) {
        result += int(str[i]) - 48;
    }

    cout << result << endl;;

    return 0;
}