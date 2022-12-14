#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    cout << int(2 * pow(3, n - 1)) << endl;

    return 0;
}