#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

long long res;
int n;

void g_x(int x)
{
    for (int i = 1; i <= x; i++)
        res += i * (x / i);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    g_x(n);
    cout << res << endl;
    
    return 0;
}