#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

#define MAX 1000000

int n, m;
bool check[MAX + 1];

void find_prime_number()
{
    check[1] = true;

    for (int i = 2; i  <= floor(sqrt(MAX)); i++)
    {
        if (check[i]) continue;

        for (int j = 2; i * j <= MAX; j++)
            check[i * j] = true;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    find_prime_number();

    cin >> n >> m;
    for (int i = n; i <= m; i++)
        if (!check[i]) cout << i << endl;

    return 0;
}