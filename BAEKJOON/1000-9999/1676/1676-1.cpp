#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int n, cnt;

void count_five(int num)
{
    if (num % 5 != 0)
        return;
    if (num % 5 == 0)
    {
        cnt++;
        count_five(num / 5);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (int i = 1; i <= n; i++)
        count_five(i);

    cout << cnt << endl;

    return 0;
}