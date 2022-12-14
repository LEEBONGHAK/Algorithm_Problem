#include<bits/stdc++.h>

#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int max = -1000000;
    int min = 1000000;
    int compare;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> compare;
        if (compare > max) {
            max = compare;
        }
        if (compare < min) {
            min = compare;
        }
    }

    cout << min << " " << max << endl;

    return 0;
}
