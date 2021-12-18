#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int n, m, cnt;
bool check[1001];

void find_prime_number() 
{
    check[1] = true;
    for (int i = 1; i < 1001; i++)
        for (int j = i; j < 1001; j++)
        {
            if (i == j) continue;
            else if (check[i] == true) continue;
            else if (j % i == 0) check[j] = true;
        }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    find_prime_number();

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (check[m] == false) cnt++;
    }

    cout << cnt << endl;

    return 0;
}